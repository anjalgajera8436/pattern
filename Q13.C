#include<stdio.h>
#include<conio.h>

 main()
{
	char a,b,k='A';
	
	for(b='A'; b<='E'; b++)
	{
		for(a='A'; a<=b; a++)
		{
			printf("%c",k);
			k++;
		}
		printf("\n");
	}
}