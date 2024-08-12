#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	
	for(b=5; b>=1; b--)
	{
		for(a=5; a>=b; a--)
		{
			printf("%d",a);
		}
		printf("\n");
	}
}