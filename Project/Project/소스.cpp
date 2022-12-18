#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int check_list[31];
	for (int i = 1; i <= 30; i++)
		check_list[i] = 0;
	int a;
	for (int i = 1; i <= 28; i++) {
		scanf("%d", &a);
		check_list[a] = 1;
	}
	for (int i = 1; i <= 30; i++)
		if (check_list[i] != 1)
			printf("%d\n", i);
	return 0;
}