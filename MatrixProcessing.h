#ifndef MATRIX_PROCESSING
#define MATRIX_PROCESSING

#include <stdio.h>
#include <stdlib.h>
#include "matrixIO.h"

struct Element {
    double element;
    int x, y;
};
typedef struct Element ELEMENT;

ELEMENT* FindElementIn(MATRIX*, double);
ELEMENT* FindElementInDebug(MATRIX*, double);

void Clear(MATRIX *matrix);

#endif