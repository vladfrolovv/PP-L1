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

ELEMENT* FindElementInDebug(MATRIX *matrix, double element) {
    ELEMENT *resultingElement = malloc(sizeof(ELEMENT));
    printf("Allocated element structure! \n");
    for (int x = 0; x < matrix->width; x++) {
        for (int y = 0; y < matrix->height; y++) {
            printf("Trying to find element[%f] on position [%d][%d] - [%f] \n", element, x, y, matrix->matrix[x * matrix->height + y]);
            if (matrix->matrix[x * matrix->height + y] == element) {
                resultingElement->x = x;
                resultingElement->y = y;
                resultingElement->element = element;
                printf("Element found successfuly on position[%d][%d]!\n", x, y);
                return resultingElement;
            }
        }
    }

    printf("Element not found, returning NULL! \n");
    return NULL;
}

void Clear(MATRIX *matrix) {
    free(matrix);
}