#define _CRT_SECURE_NO_WARNINGS
//С����ϲ�����֣�����ϲ��O��1�������ڵõ���һ���������ÿλ�������0��1��
//���ĳһλ���������Ͱ������1�������ż������ô�Ͱ������0������ش�����
//��õ������Ƕ���
#include <stdio.h>
#include <math.h>
int main()
{
	int input = 0;//������
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