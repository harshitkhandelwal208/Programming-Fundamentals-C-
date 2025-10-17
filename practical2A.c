#include <stdio.h>
#include <math.h>
void main()
{
    printf("Welcome to the Quadratic Equation Solver! \n");
    printf("The equation is in the format ax^2 + bx + c\n");
    printf("Enter the value of a(the coefficient of x^2/x-squared)\t");
    float a = 0.0f;
    scanf("%f", &a);
    printf("Enter the value of b(the coefficient of x)\t");
    float b = 0.0f;
    scanf("%f", &b);
    printf("Enter the value of c(the constant)\t");
    float c = 0.0f;
    scanf("%f", &c);
    float d = b*b - 4 * a * c;
    if(a == 0.0f)
    {
        if(b!=0.0f)
        {
        printf("The equation is not a quadratic equation, instead it is a linear equation!\n");
        float root = (-1 * c)/b;
        printf("The root of the equation is: %f\n", root);
        }
        else 
        {
            printf("The equation is invalid!");
        }
    }    
    else if(d>0.0f)
    {
        printf("The equation has real and distinct roots!\n");
        float root1 = ((b*-1)+sqrt(d))/(2*a);
        float root2 = ((b*-1)-sqrt(d))/(2*a);
        printf("The first root of the quadratic equation is: %f \n The second root of the quadratic equation is: %f\n",root1,root2);
    }
    else if(d == 0.0f)
    {
        printf("The equation has real and identical roots!\n");
        float root = (-1*b)/(2*a);
        printf("The root of the equation is: %f\n",root);
    }
    else
    {
        printf("The equation has non-real(imaginary) roots!\n");
        float real = (b*-1)/(2*a);
        float imaginary = (sqrt(-d))/(2*a);
        printf("The first root of the quadratic equation is: %f + %fi\n The second root of the quadratic equation is: %f - %fi\n",real,imaginary,real,imaginary);
    }
}
