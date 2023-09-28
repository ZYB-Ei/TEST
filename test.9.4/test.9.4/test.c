#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void reverse(char* left,char* right)
{
	while (left < right)
	{
		char tem = *left;
		*left = *right;
		*right = tem;
		left++;
		right--;
	}	
}
int main()
{
	char arr[101] = {0};
	gets(arr);
	int len = strlen(arr);
	
	reverse(arr, arr+len-1);//ÕûÌåÄæÐò

	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' '&& *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end != '\0')
			end++;
		start = end;
	}//µ¥´ÊÄæÐò
	
	printf("%s\n", arr);
	return 0;
}