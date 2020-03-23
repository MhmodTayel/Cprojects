//
// Created by Mhmod Tayel on 23/03/2020.
//
#include <stdio.h>

int main(void) {
    int square;
    scanf("%d", &square);
    for (int i = 0; i < square; i++) {
        printf("*");
    }
    printf("\n");
    for (int j = 0; j < (square - 2); j++) {
        printf("*");
        for (int k = 0; k < (square - 2); k++) {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for (int i = 0; i < square; i++) {
        printf("*");
    }


}
