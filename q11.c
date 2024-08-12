#include<stdio.h>
#include<conio.h>

void main()
{
	int b,a;
	
	for(b=1; b<=5; b++)
	{
		for(a=b; a<=5; a++)
		{
			if(a%2==0)
			{
			  printf("0");	
			}
			else
			{
			  printf("1");
			}
			
		}
		printf("\n");
	}
}