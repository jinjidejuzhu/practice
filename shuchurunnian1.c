#include<stdio.h>
#define I 4
#define J 100
int main()
{
	int year,s=0;
	for (year = 1001; year < 2000; year++)
	{
		if ((year % 4 == 0) && (year % 100 != 0))
		{
			printf("%d  ", year);
			s++;
			if (s == 5)
			{
				printf("\n"); 
				s = 0;
			}
		}
	}
	return 0;
}