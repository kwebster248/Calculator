/*Keith Webster
3/27/22
ITT-310
Jeremy Wright*/

#include<stdio.h>
#include<stdlib.h>


int main()
{
	int a, b;


	// Choosing an operator
	char ch;
	printf_s("Choose Operator\n");
	printf_s("+ for Adding\n");
	printf_s("- for Subtracting\n");
	printf_s("* for Multiplying\n");
	printf_s("/ for Dividing\n");
	scanf_s("%c", &ch);

	
	// Choosing two numbers
	printf_s("Enter any two numbers\n");
	scanf_s("%d%d", &a, &b);

	if (a == 0)
	{
		printf_s("Warning!: The first number selected is zero!! Please re-enter the first number :");
	}


	int natural;

	printf_s("\n First 15 natural numbers are: \n");
	for (natural = 0; natural < 15; natural++)
	{
		printf_s("%d", natural);

	}

	return 0;

}
