#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	
	for(b=5; b>=1; b--)
	{
		for(a=b; a<=5; a++)
		{
			printf("%d",b);
		}
		printf("\n");
	}
}