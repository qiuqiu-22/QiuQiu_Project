#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("������������ \n");
	scanf("%d%d", &a, &b);
	c = a % b;
	while (c != 0)
	{
		a = b;
		b = c;
		c = a % b;
	}
	printf("���Լ��Ϊ %d \n", b);
	return(0);
}