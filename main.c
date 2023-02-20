#include <stdio.h>
#include <string.h>

#include "matrixIO.h"
#include "MatrixProcessing.h"

char DEBUG[] = "-d";

void main(int argc, char *argv[]) {

    if (argc < 4) {
        printf("Don't have enough arguments!");
        exit(0);
    }

    MATRIX *matrix = Generate(atoi(argv[1]), atoi(argv[2]));

    printf("Generated matrix: \n");
    Output(matrix);

    double X;
    printf("Input element you're looking for: ");
    scanf("%lf", &X);

    ELEMENT *element = strcmp(argv[3], DEBUG) == 0 ? FindElementInDebug(matrix, X) : FindElementIn(matrix, X);

    if (element == NULL) {
        printf("Element not found ): \n");
    } else {
        printf("Element [%f] found on position: [%d][%d] \n", element->element, element->x, element->y);   
    }

}