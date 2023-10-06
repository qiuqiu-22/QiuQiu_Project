#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int number = rand() % 100 + 1;
	int count = 0;
	int a = 0;
	do {
		printf("请猜这个数字：");
		count ++;
		scanf("%d", &a);
		if (a > number) {
			printf("你猜大了。");
		}
		else if (a < number) {
			printf("你猜小了。");
		}
	} while (a != number);
	printf("太棒了你猜对了，共猜了%d次。\n", count);
	
	
	return 0;

}