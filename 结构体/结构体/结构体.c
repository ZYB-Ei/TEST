#define _CRT_SECURE_NO_WARNINGS
//首先得掌握结构体的对规则：
//1.第一个成员在气结构体变量偏移量为0的地址处
//2.其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
//对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值。
//。 vs中默认的值为8
//3.结构体总大小为最大对齐数(每个成员变量都有一个对齐数）的整数倍。
//4. 如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍。
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