#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define N 100
int main()
{
	float i = 1;
	float sum = 0;
	for (i = 1; i <= N; i++)
	{
		sum = sum +pow((-1), (i + 1))* (1 / i);
	}
	printf("%f", sum);

	return 0;
}