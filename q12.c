#include<stdio.h>
#include<conio.h>

void main()
{
	char a,b;
	
	for(b='A'; b<='E'; b++)
	{
		for(a='A'; a<=b; a++)
		{
			printf("%c",a);
		}
		printf("\n");
	}
}