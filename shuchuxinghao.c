#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void xing()
{

}
int main()
{
	int i = 0;
	char arr1[14] = "*************";
	char arr2[14] = "             ";
	char arr3[14] = "             ";
	for (i = 0; i < 6; i++)
	{
		arr2[6 - i] = arr1[6 - i];
		arr2[6 + i] = arr1[6 + i];
		printf("%s\n",arr2);
	}
	printf("%s\n", arr1);
	for (i = 0; i < 6; i++)
	{
		arr1[i] = arr3[i];
		arr1[12 - i] = arr3[12 - i];
		printf("%s\n", arr1);
	}
	return 0;
}