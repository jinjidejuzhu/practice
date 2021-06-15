#include<stdio.h>
int main()
{
	int i, j, s=0,q=0;
	for (i = 1; i <= 9; i++)
		for (j = 1; j <= 9; j++)
		{
			s = i * j;
			printf("%dx%d=%2d  ", i, j, s);
			q++;
			if (q == 9)
			{
				printf("\n");
				q = 0;
			}
		}
			
	return 0;
}