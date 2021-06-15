#include<stdio.h>
int main()
{
	int i, j, Num;
	for(Num=101;Num<200;Num++)
		for (i = 2; i < Num; i++)
		{
			j = Num % i;
			if (j == 0)
				break;
			if (i == Num - 1)
				printf("%d\n", Num);
		}

	
	return 0;
}