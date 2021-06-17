#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 100
int main()
{
	int i = 1,j=0;
	for (i=1; i <= N; i++)
	{
		if (i % 10 == 9)
			j++;
	}
	for (i=1; i <= N; i++)
	{
		if (i / 10 == 9)
			j++;
	}
	printf("%d", j);
	return 0;
}