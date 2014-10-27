// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/BigVAR.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// FistaLV
mat FistaLV(const mat& Y, const mat& Z, mat& B, const double gam, const double eps, double tk, int k, int p);
RcppExport SEXP BigVAR_FistaLV(SEXP YSEXP, SEXP ZSEXP, SEXP BSEXP, SEXP gamSEXP, SEXP epsSEXP, SEXP tkSEXP, SEXP kSEXP, SEXP pSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const mat& >::type Y(YSEXP );
        Rcpp::traits::input_parameter< const mat& >::type Z(ZSEXP );
        Rcpp::traits::input_parameter< mat& >::type B(BSEXP );
        Rcpp::traits::input_parameter< const double >::type gam(gamSEXP );
        Rcpp::traits::input_parameter< const double >::type eps(epsSEXP );
        Rcpp::traits::input_parameter< double >::type tk(tkSEXP );
        Rcpp::traits::input_parameter< int >::type k(kSEXP );
        Rcpp::traits::input_parameter< int >::type p(pSEXP );
        mat __result = FistaLV(Y, Z, B, gam, eps, tk, k, p);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// gamloopFista
cube gamloopFista(NumericVector beta_, const mat& Y, const mat& Z, const NumericVector gamm, const double eps, const colvec& YMean2, const colvec& ZMean2, mat& B1, int k, int p);
RcppExport SEXP BigVAR_gamloopFista(SEXP beta_SEXP, SEXP YSEXP, SEXP ZSEXP, SEXP gammSEXP, SEXP epsSEXP, SEXP YMean2SEXP, SEXP ZMean2SEXP, SEXP B1SEXP, SEXP kSEXP, SEXP pSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type beta_(beta_SEXP );
        Rcpp::traits::input_parameter< const mat& >::type Y(YSEXP );
        Rcpp::traits::input_parameter< const mat& >::type Z(ZSEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type gamm(gammSEXP );
        Rcpp::traits::input_parameter< const double >::type eps(epsSEXP );
        Rcpp::traits::input_parameter< const colvec& >::type YMean2(YMean2SEXP );
        Rcpp::traits::input_parameter< const colvec& >::type ZMean2(ZMean2SEXP );
        Rcpp::traits::input_parameter< mat& >::type B1(B1SEXP );
        Rcpp::traits::input_parameter< int >::type k(kSEXP );
        Rcpp::traits::input_parameter< int >::type p(pSEXP );
        cube __result = gamloopFista(beta_, Y, Z, gamm, eps, YMean2, ZMean2, B1, k, p);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// Eigencomp
List Eigencomp(mat Z1, List groups, int n1, int k);
RcppExport SEXP BigVAR_Eigencomp(SEXP Z1SEXP, SEXP groupsSEXP, SEXP n1SEXP, SEXP kSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< mat >::type Z1(Z1SEXP );
        Rcpp::traits::input_parameter< List >::type groups(groupsSEXP );
        Rcpp::traits::input_parameter< int >::type n1(n1SEXP );
        Rcpp::traits::input_parameter< int >::type k(kSEXP );
        List __result = Eigencomp(Z1, groups, n1, k);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// EigencompOO
List EigencompOO(mat ZZ1, List groups, int n1, int k);
RcppExport SEXP BigVAR_EigencompOO(SEXP ZZ1SEXP, SEXP groupsSEXP, SEXP n1SEXP, SEXP kSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< mat >::type ZZ1(ZZ1SEXP );
        Rcpp::traits::input_parameter< List >::type groups(groupsSEXP );
        Rcpp::traits::input_parameter< int >::type n1(n1SEXP );
        Rcpp::traits::input_parameter< int >::type k(kSEXP );
        List __result = EigencompOO(ZZ1, groups, n1, k);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// BlockUpdateGL
List BlockUpdateGL(mat& beta, const mat& Z1, double lam, const mat& Y1, double eps, List groups, List fullgroups, List compgroups, int k, List M3f_, List eigvalF_, List eigvecF_);
RcppExport SEXP BigVAR_BlockUpdateGL(SEXP betaSEXP, SEXP Z1SEXP, SEXP lamSEXP, SEXP Y1SEXP, SEXP epsSEXP, SEXP groupsSEXP, SEXP fullgroupsSEXP, SEXP compgroupsSEXP, SEXP kSEXP, SEXP M3f_SEXP, SEXP eigvalF_SEXP, SEXP eigvecF_SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< mat& >::type beta(betaSEXP );
        Rcpp::traits::input_parameter< const mat& >::type Z1(Z1SEXP );
        Rcpp::traits::input_parameter< double >::type lam(lamSEXP );
        Rcpp::traits::input_parameter< const mat& >::type Y1(Y1SEXP );
        Rcpp::traits::input_parameter< double >::type eps(epsSEXP );
        Rcpp::traits::input_parameter< List >::type groups(groupsSEXP );
        Rcpp::traits::input_parameter< List >::type fullgroups(fullgroupsSEXP );
        Rcpp::traits::input_parameter< List >::type compgroups(compgroupsSEXP );
        Rcpp::traits::input_parameter< int >::type k(kSEXP );
        Rcpp::traits::input_parameter< List >::type M3f_(M3f_SEXP );
        Rcpp::traits::input_parameter< List >::type eigvalF_(eigvalF_SEXP );
        Rcpp::traits::input_parameter< List >::type eigvecF_(eigvecF_SEXP );
        List __result = BlockUpdateGL(beta, Z1, lam, Y1, eps, groups, fullgroups, compgroups, k, M3f_, eigvalF_, eigvecF_);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ThreshUpdate
mat ThreshUpdate(mat& betaActive, const mat& Z1, double lam, const mat& Y1, double eps, List groups, List fullgroups, List compgroups, List M2f_, List eigvalF_, List eigvecF_);
RcppExport SEXP BigVAR_ThreshUpdate(SEXP betaActiveSEXP, SEXP Z1SEXP, SEXP lamSEXP, SEXP Y1SEXP, SEXP epsSEXP, SEXP groupsSEXP, SEXP fullgroupsSEXP, SEXP compgroupsSEXP, SEXP M2f_SEXP, SEXP eigvalF_SEXP, SEXP eigvecF_SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< mat& >::type betaActive(betaActiveSEXP );
        Rcpp::traits::input_parameter< const mat& >::type Z1(Z1SEXP );
        Rcpp::traits::input_parameter< double >::type lam(lamSEXP );
        Rcpp::traits::input_parameter< const mat& >::type Y1(Y1SEXP );
        Rcpp::traits::input_parameter< double >::type eps(epsSEXP );
        Rcpp::traits::input_parameter< List >::type groups(groupsSEXP );
        Rcpp::traits::input_parameter< List >::type fullgroups(fullgroupsSEXP );
        Rcpp::traits::input_parameter< List >::type compgroups(compgroupsSEXP );
        Rcpp::traits::input_parameter< List >::type M2f_(M2f_SEXP );
        Rcpp::traits::input_parameter< List >::type eigvalF_(eigvalF_SEXP );
        Rcpp::traits::input_parameter< List >::type eigvecF_(eigvecF_SEXP );
        mat __result = ThreshUpdate(betaActive, Z1, lam, Y1, eps, groups, fullgroups, compgroups, M2f_, eigvalF_, eigvecF_);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// GamLoopGL
List GamLoopGL(NumericVector beta_, List Activeset, NumericVector gamm, const mat& Y1, const mat& Z1, List jj, List jjfull, List jjcomp, double eps, const colvec& YMean2, const colvec& ZMean2, int k, int pk, const List M2f_, const List eigvalF_, const List eigvecF_);
RcppExport SEXP BigVAR_GamLoopGL(SEXP beta_SEXP, SEXP ActivesetSEXP, SEXP gammSEXP, SEXP Y1SEXP, SEXP Z1SEXP, SEXP jjSEXP, SEXP jjfullSEXP, SEXP jjcompSEXP, SEXP epsSEXP, SEXP YMean2SEXP, SEXP ZMean2SEXP, SEXP kSEXP, SEXP pkSEXP, SEXP M2f_SEXP, SEXP eigvalF_SEXP, SEXP eigvecF_SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type beta_(beta_SEXP );
        Rcpp::traits::input_parameter< List >::type Activeset(ActivesetSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type gamm(gammSEXP );
        Rcpp::traits::input_parameter< const mat& >::type Y1(Y1SEXP );
        Rcpp::traits::input_parameter< const mat& >::type Z1(Z1SEXP );
        Rcpp::traits::input_parameter< List >::type jj(jjSEXP );
        Rcpp::traits::input_parameter< List >::type jjfull(jjfullSEXP );
        Rcpp::traits::input_parameter< List >::type jjcomp(jjcompSEXP );
        Rcpp::traits::input_parameter< double >::type eps(epsSEXP );
        Rcpp::traits::input_parameter< const colvec& >::type YMean2(YMean2SEXP );
        Rcpp::traits::input_parameter< const colvec& >::type ZMean2(ZMean2SEXP );
        Rcpp::traits::input_parameter< int >::type k(kSEXP );
        Rcpp::traits::input_parameter< int >::type pk(pkSEXP );
        Rcpp::traits::input_parameter< const List >::type M2f_(M2f_SEXP );
        Rcpp::traits::input_parameter< const List >::type eigvalF_(eigvalF_SEXP );
        Rcpp::traits::input_parameter< const List >::type eigvecF_(eigvecF_SEXP );
        List __result = GamLoopGL(beta_, Activeset, gamm, Y1, Z1, jj, jjfull, jjcomp, eps, YMean2, ZMean2, k, pk, M2f_, eigvalF_, eigvecF_);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// BlockUpdate2
List BlockUpdate2(const mat& ZZ1, double lam, const mat& Y1, double eps, List groups, List fullgroups, List compgroups, int k, List M2f_, List eigvalF_, List eigvecF_, colvec& B);
RcppExport SEXP BigVAR_BlockUpdate2(SEXP ZZ1SEXP, SEXP lamSEXP, SEXP Y1SEXP, SEXP epsSEXP, SEXP groupsSEXP, SEXP fullgroupsSEXP, SEXP compgroupsSEXP, SEXP kSEXP, SEXP M2f_SEXP, SEXP eigvalF_SEXP, SEXP eigvecF_SEXP, SEXP BSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const mat& >::type ZZ1(ZZ1SEXP );
        Rcpp::traits::input_parameter< double >::type lam(lamSEXP );
        Rcpp::traits::input_parameter< const mat& >::type Y1(Y1SEXP );
        Rcpp::traits::input_parameter< double >::type eps(epsSEXP );
        Rcpp::traits::input_parameter< List >::type groups(groupsSEXP );
        Rcpp::traits::input_parameter< List >::type fullgroups(fullgroupsSEXP );
        Rcpp::traits::input_parameter< List >::type compgroups(compgroupsSEXP );
        Rcpp::traits::input_parameter< int >::type k(kSEXP );
        Rcpp::traits::input_parameter< List >::type M2f_(M2f_SEXP );
        Rcpp::traits::input_parameter< List >::type eigvalF_(eigvalF_SEXP );
        Rcpp::traits::input_parameter< List >::type eigvecF_(eigvecF_SEXP );
        Rcpp::traits::input_parameter< colvec& >::type B(BSEXP );
        List __result = BlockUpdate2(ZZ1, lam, Y1, eps, groups, fullgroups, compgroups, k, M2f_, eigvalF_, eigvecF_, B);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ThreshUpdateOO
colvec ThreshUpdateOO(const mat& ZZ, double lam, const mat& Y, double eps, List groups, List fullgroups, List compgroups, List M2f_, List eigvalF_, List eigvecF_, colvec& B, int n);
RcppExport SEXP BigVAR_ThreshUpdateOO(SEXP ZZSEXP, SEXP lamSEXP, SEXP YSEXP, SEXP epsSEXP, SEXP groupsSEXP, SEXP fullgroupsSEXP, SEXP compgroupsSEXP, SEXP M2f_SEXP, SEXP eigvalF_SEXP, SEXP eigvecF_SEXP, SEXP BSEXP, SEXP nSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const mat& >::type ZZ(ZZSEXP );
        Rcpp::traits::input_parameter< double >::type lam(lamSEXP );
        Rcpp::traits::input_parameter< const mat& >::type Y(YSEXP );
        Rcpp::traits::input_parameter< double >::type eps(epsSEXP );
        Rcpp::traits::input_parameter< List >::type groups(groupsSEXP );
        Rcpp::traits::input_parameter< List >::type fullgroups(fullgroupsSEXP );
        Rcpp::traits::input_parameter< List >::type compgroups(compgroupsSEXP );
        Rcpp::traits::input_parameter< List >::type M2f_(M2f_SEXP );
        Rcpp::traits::input_parameter< List >::type eigvalF_(eigvalF_SEXP );
        Rcpp::traits::input_parameter< List >::type eigvecF_(eigvecF_SEXP );
        Rcpp::traits::input_parameter< colvec& >::type B(BSEXP );
        Rcpp::traits::input_parameter< int >::type n(nSEXP );
        colvec __result = ThreshUpdateOO(ZZ, lam, Y, eps, groups, fullgroups, compgroups, M2f_, eigvalF_, eigvecF_, B, n);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// GamLoopGLOO
List GamLoopGLOO(NumericVector beta_, List Activeset, NumericVector gamm, const mat& Y, const mat& Z, List jj, List jjfull, List jjcomp, double eps, colvec& YMean2, colvec& ZMean2, int k, int pk, List M2f_, List eigvalF_, List eigvecF_);
RcppExport SEXP BigVAR_GamLoopGLOO(SEXP beta_SEXP, SEXP ActivesetSEXP, SEXP gammSEXP, SEXP YSEXP, SEXP ZSEXP, SEXP jjSEXP, SEXP jjfullSEXP, SEXP jjcompSEXP, SEXP epsSEXP, SEXP YMean2SEXP, SEXP ZMean2SEXP, SEXP kSEXP, SEXP pkSEXP, SEXP M2f_SEXP, SEXP eigvalF_SEXP, SEXP eigvecF_SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type beta_(beta_SEXP );
        Rcpp::traits::input_parameter< List >::type Activeset(ActivesetSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type gamm(gammSEXP );
        Rcpp::traits::input_parameter< const mat& >::type Y(YSEXP );
        Rcpp::traits::input_parameter< const mat& >::type Z(ZSEXP );
        Rcpp::traits::input_parameter< List >::type jj(jjSEXP );
        Rcpp::traits::input_parameter< List >::type jjfull(jjfullSEXP );
        Rcpp::traits::input_parameter< List >::type jjcomp(jjcompSEXP );
        Rcpp::traits::input_parameter< double >::type eps(epsSEXP );
        Rcpp::traits::input_parameter< colvec& >::type YMean2(YMean2SEXP );
        Rcpp::traits::input_parameter< colvec& >::type ZMean2(ZMean2SEXP );
        Rcpp::traits::input_parameter< int >::type k(kSEXP );
        Rcpp::traits::input_parameter< int >::type pk(pkSEXP );
        Rcpp::traits::input_parameter< List >::type M2f_(M2f_SEXP );
        Rcpp::traits::input_parameter< List >::type eigvalF_(eigvalF_SEXP );
        Rcpp::traits::input_parameter< List >::type eigvecF_(eigvecF_SEXP );
        List __result = GamLoopGLOO(beta_, Activeset, gamm, Y, Z, jj, jjfull, jjcomp, eps, YMean2, ZMean2, k, pk, M2f_, eigvalF_, eigvecF_);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// GamLoopSGL
List GamLoopSGL(NumericVector beta_, List Activeset, const NumericVector gamm, const double alpha, const mat& Y1, const mat& Z1, List jj, const List jjfull, const List jjcomp, const double eps, const colvec YMean2, const colvec ZMean2, const int k, const int pk, const List M1f_, const List M2f_, const NumericVector eigs_);
RcppExport SEXP BigVAR_GamLoopSGL(SEXP beta_SEXP, SEXP ActivesetSEXP, SEXP gammSEXP, SEXP alphaSEXP, SEXP Y1SEXP, SEXP Z1SEXP, SEXP jjSEXP, SEXP jjfullSEXP, SEXP jjcompSEXP, SEXP epsSEXP, SEXP YMean2SEXP, SEXP ZMean2SEXP, SEXP kSEXP, SEXP pkSEXP, SEXP M1f_SEXP, SEXP M2f_SEXP, SEXP eigs_SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type beta_(beta_SEXP );
        Rcpp::traits::input_parameter< List >::type Activeset(ActivesetSEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type gamm(gammSEXP );
        Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP );
        Rcpp::traits::input_parameter< const mat& >::type Y1(Y1SEXP );
        Rcpp::traits::input_parameter< const mat& >::type Z1(Z1SEXP );
        Rcpp::traits::input_parameter< List >::type jj(jjSEXP );
        Rcpp::traits::input_parameter< const List >::type jjfull(jjfullSEXP );
        Rcpp::traits::input_parameter< const List >::type jjcomp(jjcompSEXP );
        Rcpp::traits::input_parameter< const double >::type eps(epsSEXP );
        Rcpp::traits::input_parameter< const colvec >::type YMean2(YMean2SEXP );
        Rcpp::traits::input_parameter< const colvec >::type ZMean2(ZMean2SEXP );
        Rcpp::traits::input_parameter< const int >::type k(kSEXP );
        Rcpp::traits::input_parameter< const int >::type pk(pkSEXP );
        Rcpp::traits::input_parameter< const List >::type M1f_(M1f_SEXP );
        Rcpp::traits::input_parameter< const List >::type M2f_(M2f_SEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type eigs_(eigs_SEXP );
        List __result = GamLoopSGL(beta_, Activeset, gamm, alpha, Y1, Z1, jj, jjfull, jjcomp, eps, YMean2, ZMean2, k, pk, M1f_, M2f_, eigs_);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// sparseWLOO
mat sparseWLOO(const mat& M1a, const colvec& R1, const int ngroups, colvec& beta, const double t, const double alpha, const double lambda, const double eps, double rho);
RcppExport SEXP BigVAR_sparseWLOO(SEXP M1aSEXP, SEXP R1SEXP, SEXP ngroupsSEXP, SEXP betaSEXP, SEXP tSEXP, SEXP alphaSEXP, SEXP lambdaSEXP, SEXP epsSEXP, SEXP rhoSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const mat& >::type M1a(M1aSEXP );
        Rcpp::traits::input_parameter< const colvec& >::type R1(R1SEXP );
        Rcpp::traits::input_parameter< const int >::type ngroups(ngroupsSEXP );
        Rcpp::traits::input_parameter< colvec& >::type beta(betaSEXP );
        Rcpp::traits::input_parameter< const double >::type t(tSEXP );
        Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP );
        Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP );
        Rcpp::traits::input_parameter< const double >::type eps(epsSEXP );
        Rcpp::traits::input_parameter< double >::type rho(rhoSEXP );
        mat __result = sparseWLOO(M1a, R1, ngroups, beta, t, alpha, lambda, eps, rho);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// GamLoopSGLOO
List GamLoopSGLOO(NumericVector beta_, const List Activeset_, const NumericVector gamm, const double alpha, const mat& Y, const mat& Z, List jj_, const List jjfull_, List jjcomp_, const double eps, const colvec& YMean2, const colvec& ZMean2, const int k, const int pk, const List M1f_, const List M2f_, const NumericVector eigs_);
RcppExport SEXP BigVAR_GamLoopSGLOO(SEXP beta_SEXP, SEXP Activeset_SEXP, SEXP gammSEXP, SEXP alphaSEXP, SEXP YSEXP, SEXP ZSEXP, SEXP jj_SEXP, SEXP jjfull_SEXP, SEXP jjcomp_SEXP, SEXP epsSEXP, SEXP YMean2SEXP, SEXP ZMean2SEXP, SEXP kSEXP, SEXP pkSEXP, SEXP M1f_SEXP, SEXP M2f_SEXP, SEXP eigs_SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type beta_(beta_SEXP );
        Rcpp::traits::input_parameter< const List >::type Activeset_(Activeset_SEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type gamm(gammSEXP );
        Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP );
        Rcpp::traits::input_parameter< const mat& >::type Y(YSEXP );
        Rcpp::traits::input_parameter< const mat& >::type Z(ZSEXP );
        Rcpp::traits::input_parameter< List >::type jj_(jj_SEXP );
        Rcpp::traits::input_parameter< const List >::type jjfull_(jjfull_SEXP );
        Rcpp::traits::input_parameter< List >::type jjcomp_(jjcomp_SEXP );
        Rcpp::traits::input_parameter< const double >::type eps(epsSEXP );
        Rcpp::traits::input_parameter< const colvec& >::type YMean2(YMean2SEXP );
        Rcpp::traits::input_parameter< const colvec& >::type ZMean2(ZMean2SEXP );
        Rcpp::traits::input_parameter< const int >::type k(kSEXP );
        Rcpp::traits::input_parameter< const int >::type pk(pkSEXP );
        Rcpp::traits::input_parameter< const List >::type M1f_(M1f_SEXP );
        Rcpp::traits::input_parameter< const List >::type M2f_(M2f_SEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type eigs_(eigs_SEXP );
        List __result = GamLoopSGLOO(beta_, Activeset_, gamm, alpha, Y, Z, jj_, jjfull_, jjcomp_, eps, YMean2, ZMean2, k, pk, M1f_, M2f_, eigs_);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// powermethod
List powermethod(NumericMatrix A1, NumericVector x1);
RcppExport SEXP BigVAR_powermethod(SEXP A1SEXP, SEXP x1SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type A1(A1SEXP );
        Rcpp::traits::input_parameter< NumericVector >::type x1(x1SEXP );
        List __result = powermethod(A1, x1);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// norm2
double norm2(NumericVector x);
RcppExport SEXP BigVAR_norm2(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        double __result = norm2(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}