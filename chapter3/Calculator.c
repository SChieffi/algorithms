#include <stdio.h>

int main()
{
    char operation;
    float firstValue, secondValue, result;

    printf("Enter the first value:");
    scanf("%f", &firstValue);

    printf("Enter the second value:");
    scanf("%f", &secondValue);

    printf("\n");

    printf("Please choose one of the operations: [+,-,*,/]\n");
    getchar();
    operation = getchar();

    switch (operation)
    {
    case '+':
        result = firstValue + secondValue;
        break;
    case '-':
        result = firstValue - secondValue;
        break;
    case '*':
        result = firstValue * secondValue;
        break;
    case '/':
        if (secondValue == 0)
        {
            printf("Divided by 0 error!");
            return -1;
        }
        result = firstValue / secondValue;
        break;
    default:
        printf("Invalid operation!\n");
        break;
    }

    printf("\n");
    printf("The result is: %f", result);
}