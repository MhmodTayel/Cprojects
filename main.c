#include <stdio.h>

int main(void) {

    int number = 0, counter = 1, largest1 = 0, largest2 = 0;

    while (counter <= 10) {
        printf("%s", "Enter your sales :");
        scanf("%d", &number);
        if (number > largest1) {

            largest2 = largest1;
            largest1 = number;


        } else if (number > largest2) {
            largest2 = number;
        }


        counter++;
    }
    printf("the largest number is : %d\nthe previous number is : %d\n\t\t i love you noura", largest1, largest2);


}
