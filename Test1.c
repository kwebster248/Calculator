#include <stdio.h>
#include "Test.h"

// Declaring variables

char a;
char b;
char c;


int main()
{
	// Array declaration
	int x[6];
	int i;


	for (i = 0; i < 4; ++i)
	{
		//Pointer to int
		printf("&x[%d] = %p\n", i, &x[i]);
	}

	printf("Address of aray x: %p", x);



		// Character array to hold response type
	char response;
	

		// Prompt from stdin scenario for user
		printf(PROMPT_MSG);
		scanf_s("%c", &response, 1);


		// if else statements
		// modular code
		if (response == 'a')
		{

			printf(PROMPT_MSG1);
			

		}
		else
			
		{
			printf(PROMPT_MSG2);
			

		}
		
		getchar();
		scanf_s("%c", &response, 1);

		if (response == 'b')
		{
			printf(PROMPT_MSG3);
			scanf_s("%c", &response, 1);
		}
		else
		{
			printf(PROMPT_MSG4);
			scanf_s("%c", &response, 1);
		}
		
		 
		


return 0;

}
