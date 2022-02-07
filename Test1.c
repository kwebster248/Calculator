/*Keith Webster
2/6/22
ITT-310
Amr Elouchemi*/


#include <stdio.h>
#include "Test.h"



int main()
{
	//Initializing FILE and pointer declaration

	FILE* fp;

	fp = fopen_s("/temp/test.txt", "w+",15);
	fprintf(fp, "This is testing for fprintf...\n");
	fputs("THis is testing for fputs...\n", fp);
	fclose(fp);





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
			getchar();
			scanf_s("%c", &response, 1);
			if (response == 'a')
				printf(PROMPT_MSG2);

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
			
		}
		
		else
		{
			printf(PROMPT_MSG4);
			getchar();
			scanf_s("%c", &response, 1);
			if (response == 'b')
			{
				printf(PROMPT_MSG14, "\n");
				printf("YOU WIN!");
				return 0;
			}
		}
		
		getchar();
		scanf_s("%c", &response, 1);

		if (response == 'a')
		{
			printf(PROMPT_MSG9);

		}
		else
		{
			printf(PROMPT_MSG5);
			printf("GAME OVER");
			return 0;
		}
		 
		getchar();
		scanf_s("%c", &response, 1);

		if (response == 'a')
		{
			printf(PROMPT_MSG11);
		}
		else
		{
			printf(PROMPT_MSG10);
			printf("GAME OVER");
			return 0;
		}

		getchar();
		scanf_s("%c", &response, 1);

		if (response == 'b')
		{
			printf(PROMPT_MSG13);
			printf("YOU WIN");

			
		}
		else
		{
			printf(PROMPT_MSG12);
			printf("GAME OVER");
		}

return 0;

}
