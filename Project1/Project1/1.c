#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


#include "rule.h"




int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	scanf("%d", &k);
	int s = sizeof(arr) / sizeof(arr[0]);
	/*int ret = 1;*/
	int ret = rule(arr, k,s);
	if (ret == -1)
		printf("no\n");
	else
		printf("yes\n%d\n", ret);

	return 0;
}