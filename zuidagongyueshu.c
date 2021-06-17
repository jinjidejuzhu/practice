#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void menu()
{
	printf("************************\n");
	printf("****1>:继续  0>:退出****\n");
	printf("************************\n");
}
int main()
{

	int a = 0, b = 0,tem=1,j=0;
 again1:
	printf("请输入两个数>:\n");
	scanf("%d %d", &a, &b);
	if (0 == a || 0 == b)
	{
		printf("选择错误，退出程序。\n");
		return 0;
	}
	//方法一：
	//tem = a > b ? b : a;
	//while (!(a%tem==0&&b%tem==0))
	//{
	//	tem--;
	//}
	//printf("这两个数的最大公约数是：%d\n", tem);

	//方法二：辗转相除法
	while (tem != 0)
	{
		tem = a % b;
		a = b;
		b = tem;
	}
	printf("这两个数的最大公约数是：%d\n", a);
	tem = 1;
	menu();
	printf("请选择“继续”或者“退出”>:\n");
again2:
	scanf("%d", &j);
	if (1==j)
		goto again1;
	if (j != 1 && j != 0)
	{
		printf("选择错误，请重新选择>:\n");
		printf("请选择“继续”或者“退出”>:\n");
		goto again2;
	}
	return 0;

}