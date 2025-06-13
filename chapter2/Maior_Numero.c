#include <stdio.h>

int main() {
    int num1, num2;

    printf("First number: \n");
    scanf("%d", &num1);

    printf("Second number: \n");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("First is bigger than the second.");
    } else if (num1 == num2) {
        printf("Both numbers are equals! Digit another numbers.");
    } else {
        printf("The first is fewer than the second.");
    }
}