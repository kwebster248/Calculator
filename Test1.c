#include <stdio.h>
#include "Test.h"

// Declaring variables

int a;
int b;
int c;
int e;

int main()
{

	
		char response[1];     // Character array to hold response type

		// Prompt from stdin scenario for user
		printf(PROMPT_MSG);
		scanf_s("%s", response, 1);

		// if else statements

		if (response == a)
		{
			printf(PROMPT_MSG1);
			scanf_s("%s", response, 1);
		}
		else {
			printf(PROMPT_MSG2);
			scanf_s("%s", response, 1);

        }

		/*for loop  execution*/
		if (response == b)
		{
			printf(PROMPT_MSG3);
			for (e = 1; e < 10; e = e + 1) {
				printf("% d\n", e);
			}
			scanf_s("%s", response, 1);
		}
		else {
			printf(PROMPT_MSG4);
			scanf_s("%s", response, 1);

		}
		 
		

return 0;

}
