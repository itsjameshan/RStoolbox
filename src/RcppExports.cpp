// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// classQA
IntegerVector classQA(NumericVector& x, NumericMatrix rcl);
RcppExport SEXP RStoolbox_classQA(SEXP xSEXP, SEXP rclSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type rcl(rclSEXP);
    __result = Rcpp::wrap(classQA(x, rcl));
    return __result;
END_RCPP
}
// entropyCpp
NumericVector entropyCpp(NumericMatrix& x);
RcppExport SEXP RStoolbox_entropyCpp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix& >::type x(xSEXP);
    __result = Rcpp::wrap(entropyCpp(x));
    return __result;
END_RCPP
}
// gainOffsetRescale
NumericMatrix gainOffsetRescale(NumericMatrix x, NumericVector g, NumericVector o, LogicalVector clamp);
RcppExport SEXP RStoolbox_gainOffsetRescale(SEXP xSEXP, SEXP gSEXP, SEXP oSEXP, SEXP clampSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type g(gSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type o(oSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type clamp(clampSEXP);
    __result = Rcpp::wrap(gainOffsetRescale(x, g, o, clamp));
    return __result;
END_RCPP
}
// normImageCpp
NumericMatrix normImageCpp(NumericMatrix& x, NumericVector& M, NumericVector& S);
RcppExport SEXP RStoolbox_normImageCpp(SEXP xSEXP, SEXP MSEXP, SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type M(MSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type S(SSEXP);
    __result = Rcpp::wrap(normImageCpp(x, M, S));
    return __result;
END_RCPP
}
// predKmeansCpp
IntegerVector predKmeansCpp(NumericMatrix x, NumericMatrix centers);
RcppExport SEXP RStoolbox_predKmeansCpp(SEXP xSEXP, SEXP centersSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type centers(centersSEXP);
    __result = Rcpp::wrap(predKmeansCpp(x, centers));
    return __result;
END_RCPP
}
// predictMlcCpp
arma::mat predictMlcCpp(NumericMatrix newdata, List model, int nclasses);
RcppExport SEXP RStoolbox_predictMlcCpp(SEXP newdataSEXP, SEXP modelSEXP, SEXP nclassesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type newdata(newdataSEXP);
    Rcpp::traits::input_parameter< List >::type model(modelSEXP);
    Rcpp::traits::input_parameter< int >::type nclasses(nclassesSEXP);
    __result = Rcpp::wrap(predictMlcCpp(newdata, model, nclasses));
    return __result;
END_RCPP
}
// pwSimilarityCpp
NumericVector pwSimilarityCpp(NumericMatrix& img, NumericMatrix& ref, int method);
RcppExport SEXP RStoolbox_pwSimilarityCpp(SEXP imgSEXP, SEXP refSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix& >::type img(imgSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type ref(refSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    __result = Rcpp::wrap(pwSimilarityCpp(img, ref, method));
    return __result;
END_RCPP
}
// rescaleImageCpp
NumericMatrix rescaleImageCpp(NumericMatrix x, NumericVector scal, NumericVector xmin, NumericVector ymin);
RcppExport SEXP RStoolbox_rescaleImageCpp(SEXP xSEXP, SEXP scalSEXP, SEXP xminSEXP, SEXP yminSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type scal(scalSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ymin(yminSEXP);
    __result = Rcpp::wrap(rescaleImageCpp(x, scal, xmin, ymin));
    return __result;
END_RCPP
}
// specSimC
NumericMatrix specSimC(NumericMatrix& x, NumericMatrix& em);
RcppExport SEXP RStoolbox_specSimC(SEXP xSEXP, SEXP emSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type em(emSEXP);
    __result = Rcpp::wrap(specSimC(x, em));
    return __result;
END_RCPP
}
// spectralIndicesCpp
NumericMatrix spectralIndicesCpp(NumericMatrix x, CharacterVector indices, const int redBand, const int blueBand, const int greenBand, const int nirBand, const int swir2Band, const int swir1Band, const double L, const double s, const double G, const double C1, const double C2, double Levi, const double swir2ccc, const double swir2cdiff, const double sf);
RcppExport SEXP RStoolbox_spectralIndicesCpp(SEXP xSEXP, SEXP indicesSEXP, SEXP redBandSEXP, SEXP blueBandSEXP, SEXP greenBandSEXP, SEXP nirBandSEXP, SEXP swir2BandSEXP, SEXP swir1BandSEXP, SEXP LSEXP, SEXP sSEXP, SEXP GSEXP, SEXP C1SEXP, SEXP C2SEXP, SEXP LeviSEXP, SEXP swir2cccSEXP, SEXP swir2cdiffSEXP, SEXP sfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type indices(indicesSEXP);
    Rcpp::traits::input_parameter< const int >::type redBand(redBandSEXP);
    Rcpp::traits::input_parameter< const int >::type blueBand(blueBandSEXP);
    Rcpp::traits::input_parameter< const int >::type greenBand(greenBandSEXP);
    Rcpp::traits::input_parameter< const int >::type nirBand(nirBandSEXP);
    Rcpp::traits::input_parameter< const int >::type swir2Band(swir2BandSEXP);
    Rcpp::traits::input_parameter< const int >::type swir1Band(swir1BandSEXP);
    Rcpp::traits::input_parameter< const double >::type L(LSEXP);
    Rcpp::traits::input_parameter< const double >::type s(sSEXP);
    Rcpp::traits::input_parameter< const double >::type G(GSEXP);
    Rcpp::traits::input_parameter< const double >::type C1(C1SEXP);
    Rcpp::traits::input_parameter< const double >::type C2(C2SEXP);
    Rcpp::traits::input_parameter< double >::type Levi(LeviSEXP);
    Rcpp::traits::input_parameter< const double >::type swir2ccc(swir2cccSEXP);
    Rcpp::traits::input_parameter< const double >::type swir2cdiff(swir2cdiffSEXP);
    Rcpp::traits::input_parameter< const double >::type sf(sfSEXP);
    __result = Rcpp::wrap(spectralIndicesCpp(x, indices, redBand, blueBand, greenBand, nirBand, swir2Band, swir1Band, L, s, G, C1, C2, Levi, swir2ccc, swir2cdiff, sf));
    return __result;
END_RCPP
}
