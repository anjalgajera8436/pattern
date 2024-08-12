#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,k=1;
	
	for(b=1; b<=5; b++)
	{
		for(a=1; a<=b; a++)
		{
			printf("%d\t",k);
			k++;
		}
		printf("\n");
	}
}