#include <stdio.h>
void main()
{
	float TA = 1600.0f;
	float basic_salary = 0.0f; //Declare and Initialize the basic salary
	printf("Input the basic salary:\t");
	scanf("%f", &basic_salary);
	float HRA = 0.1 * basic_salary;
	float DA = 0.3 * basic_salary;
	float gross_salary = basic_salary + HRA + DA + TA;//Calculate the gross/final salary
	int a = (int) gross_salary;
	if(gross_salary == a)//check if the gross salary is an integer.
	{
		printf("The gross salary is: %d\n", (int)gross_salary);
	}
	else 
	{
		printf("The gross salary is: %f.2\n", gross_salary);
	}
}
