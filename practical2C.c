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
    switch (operation)
    {
    case 1:
        {
            float a, b;
            printf("Enter two numbers to add:\n");
            scanf("%f %f", &a, &b);
            printf("Result: %.2f\n", a + b);
            break;
        }
    case 2:
        {
            float a, b;
            printf("Enter two numbers to subtract (a - b):\n");
            scanf("%f %f", &a, &b);
            printf("Result: %.2f\n", a - b);
            break;
        }
    case 3:
        {
            float a, b;
            printf("Enter two numbers to multiply:\n");
            scanf("%f %f", &a, &b);
            printf("Result: %.2f\n", a * b);
            break;
        }
    case 4:
        {
            float a, b;
            printf("Enter two numbers to divide (a / b):\n");
            scanf("%f %f", &a, &b);
            if(b == 0.0f)
                printf("Error: Division by zero is not allowed.\n");
            else
                printf("Result: %.2f\n", a / b);
            break;
        }
    case 5:
        {
            int a, b;
            printf("Enter two integers to find modulus (a %% b):\n");
            scanf("%d %d", &a, &b);
            if(b == 0)
                printf("Error: Modulus by zero is not allowed.\n");
            else
                printf("Result: %d\n", a % b);
            break;
        }
    case 6:
        {
            float a;
            printf("Enter a number to find its square root:\n");
            scanf("%f", &a);
            if(a < 0.0f)
                printf("Error: Square root of negative number is not defined in real numbers.\n");
            else
                printf("Result: %.2f\n", sqrt(a));
            break;
        }
    case 7:
        {
            float a;
            printf("Enter a number to find its square:\n");
            scanf("%f", &a);
            printf("Result: %.2f\n", a * a);
            break;
        }
    case 8: 
        {
            float a;
            printf("Enter a number to find its cube:\n");
            scanf("%f", &a);
            printf("Result: %.2f\n", a * a * a);
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
