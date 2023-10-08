#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct A
{
	char a : 1;
	int b : 1;
	char c : 1;
	char d : 1;
}a;
int main()
{
	char arr[10] = { 1,2,3,4,5 };
	printf("%d", arr[0]);
	return 0;
}