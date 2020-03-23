//
// Created by Mhmod Tayel on 23/03/2020.
//

#include <stdio.h>

int main(void) {
    int number, dec = 0;
    int first = 0, second = 0, third = 0, fourth = 0, fifth = 0;

    printf("%s", "Enter a binary number (5 digits): ");
    scanf("%d", &number);
    first = number / 10000;
    second = (number - 10000 * first) / 1000;
    third = (number - 10000 * first - 1000 * second) / 100;
    fourth = (number - 10000 * first - 1000 * second - 100 * third) / 10;
    fifth = (number - 10000 * first - 1000 * second - 100 * third - fourth * 10);
    printf("%d\t%d\t%d\t%d\t%d\n", first, second, third, fourth, fifth);
    dec = first * 16 + second * 8 + third * 4 + fourth * 2 + fifth * 1;
    printf("Decimal number is : %d \n", dec);
}

