#include <ripser/ripser.h>
#include <tdautils/typecastUtils.h>


template< typename RealMatrix, typename Print >
inline void DiagRipser(
    const RealMatrix& X,
    const unsigned nSamples,
    const unsigned nDim,
    const int maxdimension,
    const double maxscale,
    const bool is_distance_matrix,
    const bool printProgress,
    const Print      & print,
    std::vector< std::vector< std::vector< double > > > & persDgm){
        
        std::vector< std::vector<double> > input = TdaToStl< std::vector< std::vector<double> > >(X, nSamples, nDim);
        std::vector< std::vector<double> > distance_mat;

        if(!is_distance_matrix){
            //generate distance matrix from point cloud.
            //TODO: Figure out if this is already implemented somewhre in the TDA codebase?
            for(int i = 0; i < input.size(); i++){
                std::vector<double> col(input.size());
                distance_mat.push_back(col);
            }
            for(int i = 0; i< input.size(); i++){
                for(int j = 0; j < input.size(); j++){
                    double L2_buffer = 0;

                    for(int k = 0; k < input[i].size(); k++)
                        L2_buffer += pow(input[i][k] - input[j][k], 2);

                    distance_mat[i][j] = sqrt(L2_buffer);
                }
            }
        }

        if(printProgress)
            print("# Generated a distance matrix of size: %d x %d \n", distance_mat.size(), distance_mat.size());

        if(is_distance_matrix)
            distance_mat = input;

        double* X_raw = &distance_mat[0][0];
        ripserResults res = rips_dm(X_raw, nSamples, 2, maxdimension, maxscale, 0);

        //count persistance pairs


        std::vector< std::vector< std::vector<double> > > res_processed = RipserToStl(res.births_and_deaths_by_dim);

        unsigned persistence_pairs = 0;
        for(int dim = 0; dim < res_processed.size(); dim++)
            for(int j = 0; j < res_processed[dim].size(); j++)
                persistence_pairs ++;

        if(printProgress)
            print("# Generated %d persistance pairs. \n", persistence_pairs);

        persDgm = res_processed;
}