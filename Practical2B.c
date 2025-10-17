#include <stdio.h>
void main()
{
    printf("Welcome to the Grade Calculator! \n");
    printf("Enter the marks obtained out of 100:\t");
    float marks = 0.0f;
    scanf("%f", &marks);
    if(marks < 0.0f || marks > 100.0f)
        printf("Invalid marks entered! Please enter marks between 0 and 100.\n");
    else if (marks >= 60.0f)
        printf("Grade: First class\n");
    else if (marks >= 50.0f)
        printf("Grade: Second Class\n");
    else if (marks >= 40.0f)
        printf("Grade: Pass\n");
    else
        printf("Grade: Fail\n");
}
