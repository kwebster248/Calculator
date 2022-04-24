/*Keith Webster
4/23/22
ITT-310
Jeremy Wright*/

#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int a, b;

	// Declaring File Pointer
	FILE* fp;

	fp = fopen_s(" /tmp/new.txt", "w", 3);
	fprintf_s(fp, "This is a new file \n");
	fclose(fp);
	
	


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

	switch (ch)
	{
	case '+':
		printf("%d + %d = %d\n", a, b, (a + b));
		break;
	case '-':
		printf("%d - %d = %d\n", a, b, (a - b));
		break;
	case '*':
		printf("%d * %d = %d\n", a, b, (a * b));
		break;
	case '/':
		if (b == 0)
			/*If 0 is entered for the divisor p2 this error will display*/
		{
			printf("Divisor cannot be 0");
			return 0;
		}
		printf("%d / %d = %0.2f\n", a, b, (a / (float)b));
		break;
	default:
		/*If a character other than an operator is entered this
		error will display*/
		printf("Error! operator is not correct\n");
	}
	




	return 0;

}
