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
		printf("���������֣�");
		count ++;
		scanf("%d", &a);
		if (a > number) {
			printf("��´��ˡ�");
		}
		else if (a < number) {
			printf("���С�ˡ�");
		}
	} while (a != number);
	printf("̫������¶��ˣ�������%d�Ρ�\n", count);
	
	
	return 0;

}