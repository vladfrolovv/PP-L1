#include <stdio.h>
#include "matrixIO.h"
#include "MatrixProcessing.h"

void main() {
    MATRIX *matrix = Generate(7, 9);

    printf("Generated matrix: \n");
    Output(matrix);

    double X;
    printf("Input element you're looking for: ");
    scanf("%lf", &X);

    ELEMENT *element = FindElementIn(matrix, X);

    if (element == NULL) {
        printf("Element not found ): ");
    } else {
        printf("Element [%f] found on position: [%d][%d] \n", element->element, element->x, element->y);   
    }

}