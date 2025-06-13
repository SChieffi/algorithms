#include <stdio.h>

int main()
{
    int count = 0;
    int numberOfRepetitions;
    float value, sum, median;

    sum = 0;
    printf("Times repeated: ");
    scanf("%d", &numberOfRepetitions);

    while (count < numberOfRepetitions)
    {
        printf("Value: ");
        scanf("%f", &value);

        sum = sum + value;
        ++count;
    }

    median = sum / count;
    printf("Sum: %f\n", sum);
    printf("Median: %f", median);
}