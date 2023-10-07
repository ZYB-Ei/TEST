#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//使用
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1 + i;
	}
	//扩容
	int* prt=(int*)realloc(p,80);
	assert(prt);
	if (prt != NULL)
	{
		p = prt;
	}
	//使用
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p[i]);
	}
	free(p);
	p = NULL;
	return 0;
}