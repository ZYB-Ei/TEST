#define _CRT_SECURE_NO_WARNINGS
//���ȵ����սṹ��ĶԹ���
//1.��һ����Ա�����ṹ�����ƫ����Ϊ0�ĵ�ַ��
//2.������Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ����
//������ = ������Ĭ�ϵ�һ�������� �� �ó�Ա��С�Ľ�Сֵ��
//�� vs��Ĭ�ϵ�ֵΪ8
//3.�ṹ���ܴ�СΪ��������(ÿ����Ա��������һ��������������������
//4. ���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ��������С��������������������Ƕ�׽ṹ��Ķ�����������������
#include<stdio.h>
#include<stddef.h>
struct s1
{
	char c1;//1
	int i;//4
	char c2;//1
};
struct s2
{
	char c1;//1
	char c2;//1
	int i;//4
};
struct s3
{
	double d;//1
	char c;//1
	int i;//4
};
struct s4
{
	char c1;//1
	struct s3 s3;//1
	double d;//4
};
int main()
{
	printf("%d\n", sizeof(struct s1));//12
	printf("%d\n", sizeof(struct s2));//8

	//printf("%d\n", offsetof(struct s1,c1));//0
	//printf("%d\n", offsetof(struct s1, i));//4
	//printf("%d\n", offsetof(struct s1, c2));//8

	//printf("%d\n", offsetof(struct s2, c1));//0
	//printf("%d\n", offsetof(struct s2, c2));//1
	//printf("%d\n", offsetof(struct s2, i));//4

	printf("%d\n", sizeof(struct s3));//16
	printf("%d\n", sizeof(struct s4));//32
	return 0;
}