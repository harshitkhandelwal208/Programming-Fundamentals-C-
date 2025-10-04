#include <stdio.h>
void main()
{
    printf("**Comparator**\n****************\n");
    float input = 0.0f; // Declare and Initialize the input variable
    printf("Input the first number to be compared number:\t");
    scanf("%f", &input);
    float num1 = input;
    printf("Input the second number to be compared number:\t");
    scanf("%f", &input);
    float num2 = input;
    printf("Input the third number to be compared number:\t");
    scanf("%f", &input);
    float num3 = input;
    float result = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    if(result == (int) result)
    {
        printf("The largest number is: %d\n", (int) result);
    }
    else
    {
        printf("The largest number is: %f\n", result);
    }
}