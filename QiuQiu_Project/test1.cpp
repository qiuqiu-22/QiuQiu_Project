#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("请输入两个数 \n");
	scanf("%d%d", &a, &b);
	c = a % b;
	while (c != 0)
	{
		a = b;
		b = c;
		c = a % b;
	}
	printf("最大公约数为 %d \n", b);
	return(0);
}