#ifndef MATRIX_IO
#define MATRIX_IO

#include <stdio.h>
#include <stdlib.h>

struct Matrix {
    double *matrix;
    int height, width;
};
typedef struct Matrix MATRIX;

void Output(MATRIX *);

void AllocateMatrix(MATRIX *matrix);
void FillRandom(MATRIX *matrix);

MATRIX *Generate(int, int);

#endif