#include "stdio.h"
void achievement(int count);
int tree(int n1,int n2,int n3);
int main()
{
	int x = 1,y,count=0;
	printf("����2����Ȼ��\n����ʥ�����Ĳ��� !\n�Լ�ÿ��߶�ϵ��(���� 2 )\n");
	while (x)
	{

		int n1, n2, n3;
		scanf_s("%d%d", &n1, &n3);
		n2 = 2;

		printf("\nDuangDuang~~~\n", n1);
		tree(n1, n2, n3);
		count++;
		achievement(count);
		printf("\n��ӭ����~����Ŷ\n");


	}
	return main();
}
int tree(int n1,int n2,int n3)
{
	int a, b, c, i, j;

	b = 1+n2*((n1+n3)-1)+n2*(n1-1);/********b�������һ�㣬����a �����ֵ*********/

	for (  i = 1; i <= n1; i++)/**********�ı�n1�Ϳ��Ըı����************/
	{
		for (j = 1; j <= (i + n3); j++)/*****ÿ����n1+n3��*****/
		{
			a = 1+n2*(j-1)+n2*(i-1 );/**********�ı�n2���Ըı�ÿ�б���һ�ж༸��************/
			for (c = 0; c < (b - a) / 2; c++)
				printf(" ");
			for (c = 0; c < a; c++)
				printf("*");
			for (c = 0; c < (b - a) / 2; c++)
				printf(" ");
			printf("\n");
		}
	}
	b = b - n2;
	b = b / 2;
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < b; j++)
			printf(" ");
		printf("|||\n");
	}
	return 0;
}
void achievement(int count)
{
	switch (count)
	{
	case 1:printf("��óɾ͡���\n���ҵĵ�һ������������\n"); break;
	case 3:printf("��óɾ͡���\n����¹��������\n"); break;
	case 5:printf("��óɾ͡���\n������ɡ�������\n"); break;
	case 7:printf("��óɾ͡���\n��ʥ�����ˡ�������\n"); break;
	case 10:printf("��óɾ͡���\n��ͨ�أ�û��~��������\n"); break;
	default:
		break;
	}
}
