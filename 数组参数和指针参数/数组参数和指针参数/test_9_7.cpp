#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int arr[5];//��������
int* parr1[10];// ����ָ������
int(*parr2)[10]; //��������ָ��
int(*parr3[10])[5];//�����������ָ������� ����Ϊ��int��*��[5] �� 10��Ԫ��

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

void test(int arr[][5])// ��ά�����п���ʡ��
{}
void test(int arr[3][5])
{}
void test (int(*arr)[5])
{}

int main()
{
	int arr[3][5] = { 0 };
	test(arr);//��ά�������������ʾ��һ�еĵ�ַ
	return 0;
}

