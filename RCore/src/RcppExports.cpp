// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// load_hostfxr
bool load_hostfxr();
RcppExport SEXP _IronR_load_hostfxr() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(load_hostfxr());
    return rcpp_result_gen;
END_RCPP
}
// netcore5_init0
bool netcore5_init0();
RcppExport SEXP _IronR_netcore5_init0() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(netcore5_init0());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _IronR_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_IronR_load_hostfxr", (DL_FUNC) &_IronR_load_hostfxr, 0},
    {"_IronR_netcore5_init0", (DL_FUNC) &_IronR_netcore5_init0, 0},
    {"_IronR_rcpp_hello_world", (DL_FUNC) &_IronR_rcpp_hello_world, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_IronR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
