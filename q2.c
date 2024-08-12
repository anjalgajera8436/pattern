#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	
	for(b=1; b<=5; b++)
	{
		for(a=b; a>=1; a--)
		{
			printf("%d",a);
		}
		printf("\n");
	}
}