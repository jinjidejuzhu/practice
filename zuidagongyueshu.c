#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void menu()
{
	printf("************************\n");
	printf("****1>:����  0>:�˳�****\n");
	printf("************************\n");
}
int main()
{

	int a = 0, b = 0,tem=1,j=0;
 again1:
	printf("������������>:\n");
	scanf("%d %d", &a, &b);
	if (0 == a || 0 == b)
	{
		printf("ѡ������˳�����\n");
		return 0;
	}
	//����һ��
	//tem = a > b ? b : a;
	//while (!(a%tem==0&&b%tem==0))
	//{
	//	tem--;
	//}
	//printf("�������������Լ���ǣ�%d\n", tem);

	//��������շת�����
	while (tem != 0)
	{
		tem = a % b;
		a = b;
		b = tem;
	}
	printf("�������������Լ���ǣ�%d\n", a);
	tem = 1;
	menu();
	printf("��ѡ�񡰼��������ߡ��˳���>:\n");
again2:
	scanf("%d", &j);
	if (1==j)
		goto again1;
	if (j != 1 && j != 0)
	{
		printf("ѡ�����������ѡ��>:\n");
		printf("��ѡ�񡰼��������ߡ��˳���>:\n");
		goto again2;
	}
	return 0;

}