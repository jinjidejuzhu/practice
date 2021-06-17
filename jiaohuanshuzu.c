#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 10
int main()
{
	int i = 0,j=0;
	int arr1[N] = { 0 }, arr2[N] = {0}, arr3[N] = { 0 };
	printf("请输入数组arr1的元素>:\n");
	for (i = 0; i < N; i++)
	{
		printf("NO.%d>:",i+1);
		scanf("%d", &arr1[i]);
	}
	printf("请输入数组arr2的元素>:\n");
	for (i = 0; i < N; i++)
	{
		printf("NO.%d>:", i + 1);
		scanf("%d", &arr2[i]);
	}
	for (i = 0; i < N; i++)
		arr3[i]=arr1[i];
	for (i = 0; i < N; i++)
		arr1[i] = arr2[i];
	for (i = 0; i < N; i++)
		arr2[i] = arr3[i];
	printf("交换后数组arr1的元素>:\n");
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("交换后数组arr2的元素>:\n");
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	return 0;
}