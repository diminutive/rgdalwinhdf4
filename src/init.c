#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP _rgdalwinhdf4_timesTwo(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_rgdalwinhdf4_timesTwo", (DL_FUNC) &_rgdalwinhdf4_timesTwo, 1},
    {NULL, NULL, 0}
};

void R_init_rgdalwinhdf4(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
