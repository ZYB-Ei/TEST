#define _CRT_SECURE_NO_WARNINGS
#include<errno.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
int main()
{
	/*int arr[10] = { 0 };*/
	// 动态内存开辟
	int* p = (int*)malloc(40);//40个字节
	/*assert(p);*/
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//使用
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ",*(p+i));
	}
	free(p); 
	p = NULL;

	return 0;
}
