//
// Created by Mhmod Tayel on 23/03/2020.
//

#include <stdio.h>
#include <math.h>

int main() {

    int range;
    int temp;
    int number;
    printf("Enter Range : ");
    scanf("%d", &range);
    for (int i = 152; i < range; i++) {
        number = i;
        int rem = 0;
        int total = 0, power = 0;
        temp = number;
        while (number != 0) {
            number /= 10;
            power++;
        }
        number = temp;
        while (number != 0) {
            rem = number % 10;
            number /= 10;

            total = pow(rem, power) + total;


        }
        if (total == i)
            printf("%d\n", total);
    }


    return 0;
}
