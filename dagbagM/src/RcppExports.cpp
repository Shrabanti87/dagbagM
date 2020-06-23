// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// hc
Rcpp::List hc(const Rcpp::NumericMatrix& Y, const Rcpp::CharacterVector& nodeType, const Rcpp::LogicalMatrix& whiteList, const Rcpp::LogicalMatrix& blackList, double tol, int maxStep, bool verbose);
RcppExport SEXP _dagbagM_hc(SEXP YSEXP, SEXP nodeTypeSEXP, SEXP whiteListSEXP, SEXP blackListSEXP, SEXP tolSEXP, SEXP maxStepSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector& >::type nodeType(nodeTypeSEXP);
    Rcpp::traits::input_parameter< const Rcpp::LogicalMatrix& >::type whiteList(whiteListSEXP);
    Rcpp::traits::input_parameter< const Rcpp::LogicalMatrix& >::type blackList(blackListSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxStep(maxStepSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(hc(Y, nodeType, whiteList, blackList, tol, maxStep, verbose));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _dagbagM_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_dagbagM_hc", (DL_FUNC) &_dagbagM_hc, 7},
    {"_dagbagM_rcpp_hello_world", (DL_FUNC) &_dagbagM_rcpp_hello_world, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_dagbagM(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
