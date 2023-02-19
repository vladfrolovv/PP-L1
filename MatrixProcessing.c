#include "MatrixProcessing.h"

ELEMENT* FindElementIn(MATRIX *matrix, double element) {
    ELEMENT *resultingElement = malloc(sizeof(ELEMENT));
    for (int x = 0; x < matrix->width; x++) {
        for (int y = 0; y < matrix->height; y++) {
            if (matrix->matrix[x * matrix->height + y] == element) {
                resultingElement->x = x;
                resultingElement->y = y;
                resultingElement->element = element;
            
                return resultingElement;
            }
        }
    }

    return NULL;
}