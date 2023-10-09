#define _CRT_SECURE_NO_WARNINGS
//小乐乐喜欢数字，尤其喜欢O和1。他现在得到了一个数，想把每位的数变成0或1。
//如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。请你回答他最
//后得到的数是多少
#include <stdio.h>
#include <math.h>
int main()
{
	int input = 0;//输入数
	int sum = 0;
	//scanf ("%d", &input);
	int i = 0;
	while (input)
	{
		int bit = input % 10;
		
		
		sum += (bit % 2) * pow(10, i);
		
		input /= 10;
		i++;
	}
	printf("%d", sum);
	
	return 0;
}