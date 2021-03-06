// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// G_gamma_cpp
double G_gamma_cpp(double x, double gamma);
RcppExport SEXP _semicure_G_gamma_cpp(SEXP xSEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(G_gamma_cpp(x, gamma));
    return rcpp_result_gen;
END_RCPP
}
// G_inv_cpp
double G_inv_cpp(double y, double gamma);
RcppExport SEXP _semicure_G_inv_cpp(SEXP ySEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(G_inv_cpp(y, gamma));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_semicure_G_gamma_cpp", (DL_FUNC) &_semicure_G_gamma_cpp, 2},
    {"_semicure_G_inv_cpp", (DL_FUNC) &_semicure_G_inv_cpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_semicure(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
