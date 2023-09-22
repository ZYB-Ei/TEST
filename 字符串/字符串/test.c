#define _CRT_SECURE_NO_WARNINGS
//模拟strlen函数
#include<stdio.h>
#include<assert.h>
//size_t mystrlen(const char* arr)
//{
//	size_t count = 0;
//	assert(arr);
//	while (*arr++ != '\0')
//	{
//		/*arr++;*/
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef"; 
//	size_t ret = mystrlen(arr);
//	printf("%u\n", ret);
//	return 0;
//}

//模拟strcpy函数
//char* mystrcpy(char* dest,const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//
//
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[20] = { 0 };
//	mystrcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

