#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int arr[5];//整型数组
int* parr1[10];// 整型指针数组
int(*parr2)[10]; //整型数组指针
int(*parr3[10])[5];//存放整型数组指针的数组 类型为：int（*）[5] ， 10个元素

void test(int arr[])
{}
void test(int arr[10])
{}
void test(int* arr)
{}
void test1(int* arr2[20])
{}
void test1(int** arr2)
{}

int main()
{
	int arr[10] = { 0 };
	int* arr2[20] = { 0 };
	test(arr);
	test1(arr2);
	return 0;
}

void test(int arr[][5])// 二维数组行可以省略
{}
void test(int arr[3][5])
{}
void test (int(*arr)[5])
{}

int main()
{
	int arr[3][5] = { 0 };
	test(arr);//二维数组的数组名表示第一行的地址
	return 0;
}

