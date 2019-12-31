#include <ripser/ripser.h>
#include <tdautils/typecastUtils.h>

template< typename RealMatrix >
inline void ripser_interface(
    const RealMatrix& X,
    const unsigned nSamples,
    const unsigned nDim,
    const int maxdimension,
    const double maxscale,
    const bool is_distance_matrix,
    std::vector< std::vector< std::vector< double > > > & persDgm){

        //Convert RealMatrix X to vector
        std::vector<float> X_v = TdaToStl< std::vector<float> >(X, nSamples, nDim);
        float* X_raw = &X_v[0];

        if(!is_distance_matrix){
            //get distance matrix from X
            
        }

        ripserResults res = rips_dm(X_raw, nSamples, 2, maxdimension, maxscale, 0);

        //convert res to persDgm output
}