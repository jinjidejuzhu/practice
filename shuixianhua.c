#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define N 999
int main()
{
	int i = 1,a=0,b=0,c=0;
	for (i = 100; i < N; i++)
	{
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		if (i == pow(a, 3) + pow(b, 3) + pow(c, 3))
			printf("%d\n", i);
	}
	return 0;
}