#include "matrixIO.h"

void Output(MATRIX *matrix) {
    for (int x = 0; x < matrix->width; x++) {
        for (int y = 0; y < matrix->height; y++) {
            printf("%f ", matrix->matrix[x * matrix->height + y]);
        }

        printf("\n");
    }
}

void AllocateMatrix(MATRIX *matrix)
{
    matrix->matrix = (double *)malloc(matrix->height * matrix->width * sizeof(double));
}

void FillRandom(MATRIX *matrix) {
    for (int x = 0; x < matrix->width; x++) {
        for (int y = 0; y < matrix->height; y++) {
            matrix->matrix[x * matrix->height + y] = rand() % 100;
        }
    }
}

MATRIX *Generate(int height, int width)
{
    MATRIX *matrix = malloc(sizeof(MATRIX));

    matrix->height = height;
    matrix->width = width;

    AllocateMatrix(matrix);
    FillRandom(matrix);

    return matrix;
}