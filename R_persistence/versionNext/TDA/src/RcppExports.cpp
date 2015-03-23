// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// GridDiag
void GridDiag(Rcpp::NumericVector FUNvaluesInput, int gridDimensionInput, Rcpp::IntegerVector gridNumberInput, int maxdimensionInput, std::string decompositionInput, std::string libraryInput, int locationInput, int printInput);
RcppExport SEXP TDA_GridDiag(SEXP FUNvaluesInputSEXP, SEXP gridDimensionInputSEXP, SEXP gridNumberInputSEXP, SEXP maxdimensionInputSEXP, SEXP decompositionInputSEXP, SEXP libraryInputSEXP, SEXP locationInputSEXP, SEXP printInputSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type FUNvaluesInput(FUNvaluesInputSEXP);
    Rcpp::traits::input_parameter< int >::type gridDimensionInput(gridDimensionInputSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type gridNumberInput(gridNumberInputSEXP);
    Rcpp::traits::input_parameter< int >::type maxdimensionInput(maxdimensionInputSEXP);
    Rcpp::traits::input_parameter< std::string >::type decompositionInput(decompositionInputSEXP);
    Rcpp::traits::input_parameter< std::string >::type libraryInput(libraryInputSEXP);
    Rcpp::traits::input_parameter< int >::type locationInput(locationInputSEXP);
    Rcpp::traits::input_parameter< int >::type printInput(printInputSEXP);
    GridDiag(FUNvaluesInput, gridDimensionInput, gridNumberInput, maxdimensionInput, decompositionInput, libraryInput, locationInput, printInput);
    return R_NilValue;
END_RCPP
}
// Bottleneck
double Bottleneck(const Rcpp::NumericMatrix& Diag1, const Rcpp::NumericMatrix& Diag2);
RcppExport SEXP TDA_Bottleneck(SEXP Diag1SEXP, SEXP Diag2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Diag1(Diag1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Diag2(Diag2SEXP);
    __result = Rcpp::wrap(Bottleneck(Diag1, Diag2));
    return __result;
END_RCPP
}
// Wasserstein
double Wasserstein(const Rcpp::NumericMatrix& Diag1, const Rcpp::NumericMatrix& Diag2, const int p);
RcppExport SEXP TDA_Wasserstein(SEXP Diag1SEXP, SEXP Diag2SEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Diag1(Diag1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Diag2(Diag2SEXP);
    Rcpp::traits::input_parameter< const int >::type p(pSEXP);
    __result = Rcpp::wrap(Wasserstein(Diag1, Diag2, p));
    return __result;
END_RCPP
}
