#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char input = 'A';
	
	do
	{
		scanf("%c", &input);
		if (input=='Y')
		{
		printf("1\n");
		}
		else
		{
		printf("2\n");
		}
		getchar();
	} while (input != 'Y');
	
	return 0;
}