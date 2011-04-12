/*
  Header file for fperiod.c. See fperiod.c for documentation.

  Author: Pearu Peterson
  Created: March 2011
 */

#ifndef FPERIOD_H
#define FPERIOD_H

extern double fperiod_compute_period(double* f, int n, int m, double structure_size);
extern double fperiod_find_acf_maximum(double* f, int n, int m, int lbound, int ubound);
extern double fperiod_acf(double y, double* f, int n, int m);
extern void fperiod_subtract_average1(double* f, int n, int fstride, int smoothness, double* r, int rstride);
extern void fperiod_subtract_average(double* f, int n, int m, int structure_size, double* r);
extern void fperiod_subtract_average_2d(double* f, int n, int m, int smoothness, double* r);

#endif
