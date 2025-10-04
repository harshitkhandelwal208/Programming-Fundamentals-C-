#include <stdio.h>
void main()
{
	float TA = 1600.0f;
	float basic_salary = 0.0f; //Declare and Initialize the basic salary
	printf("Input the basic salary:\t");
	scanf("%f", &basic_salary);
	float HRA = 0.1 * basic_salary;
	float DA = 0.3 * basic_salary;
	int a = (int) basic_salary;
	if(basic_salary == a)//check if the number is an integer.
	{
		int final_salary = (int) basic_salary + HRA + DA + TA;//Calculate the gross/final salary
		printf("The gross salary is: %d\n", final_salary);
	}
	else 
	{
		float final_salary = basic_salary + HRA + DA + TA;//Calculate the gross/final salary
		printf("The gross salary is: %f\n", final_salary);
	}
}
