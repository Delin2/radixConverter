/*
** Dennis Lin
** DL142745
** Noah
** Fr_12:35
*/

#include <stdio.h>

int main(void)
{
	char base_digits[16]= {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	
	int x[64];
	int number, base, i, y=0;
	
	/* Get the number and base decimal integer */
	printf("Enter two intergers: "); 
	fflush(stdout);
	scanf("%d %d", &number, &base);
	
	/*Converts */
	if(number != 0)
	{
		while(number != NULL)
		{
			x[y] = number % base;
			number = number / base;
			y++;
		}
		
		y--;
		printf("Answer = ");
		fflush(stdout);
		
		/* Prints out answer*/
		for(i=y; i>=0; i--)
		{
			printf("%c", base_digits[x[i]]);
			fflush(stdout);
		}
	}else /*If number is 0*/
	{
		printf("Answer = 0");
	}
	
	printf("\n");
	fflush(stdout);
}
	
	