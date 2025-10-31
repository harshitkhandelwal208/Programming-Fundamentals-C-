#include <stdio.h>
void main()
{
    printf("Welcome to the C calculator! \n");
    operator:
    printf("Enter the code for the operation you want to perform:- \n (1): Addition\n (2): Subtraction\n (3): Multiplication\n (4): Division\n (5): Modulus\n (6): Square root\n (7): Square\n (8): Cube\n (9): Exit\n");
    int operation = 0;
    scanf("%d", &operation);
    if(operation < 1 || operation > 9)
        {
            printf("Invalid operation code entered! Please enter a code between 1 and 9.\n");
            goto operator;
        }
    float a, b;
    printf("Enter two numbers to perform the operation(s) on:\n");
    scanf("%f %f", &a, &b);

    switch (operation)
    {
    case 1:
        {
            printf("Sum Result: %.2f\n", a + b);
            break;
        }
    case 2:
        {
            printf("Difference Result: %.2f\n", a - b);
            break;
        }
    case 3:
        {
            printf("Product Result: %.2f\n", a * b);
            break;
        }
    case 4:
        {
            if(b == 0.0f)
                printf("Error: Division by zero is not allowed.\n");
            else
                printf("Divison Result: %.2f\n", a / b);
            break;
        }
    case 5:
        {
            int num1 =(int)a, num2=(int)b;
            if(b == 0)
                printf("Error: Modulus by zero is not allowed.\n");
            else
                printf("Modulus Result: %d\n", num1 % num2);
            break;
        }
    case 6:
        {
            if(a < 0.0f)
                printf("Error: Square root of negative number is not defined in real numbers.\n");
            else
                printf("Square root Result: %.2f\n", sqrt(a));
            break;
        }
    case 7:
        {
            printf("Square Result: %.2f\n", a * a);
            break;
        }
    case 8: 
        {
            printf("Cube Result: %.2f\n", a * a * a);
            break;
        }
    case 9:
        {
            printf("Exiting the calculator. Goodbye!\n");
            return;
        }
    default:
        {
            printf("An unexpected error occurred.\n");
            break;
        }
    }
}
