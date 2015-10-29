#include "stdio.h"
void achievement(int count);
int tree(int n1,int n2,int n3);
int main()
{
	int x = 1,y,count=0;
	printf("给我2个自然数\n决定圣诞树的层数 !\n以及每层高度系数(建议 2 )\n");
	while (x)
	{

		int n1, n2, n3;
		scanf_s("%d%d", &n1, &n3);
		n2 = 2;

		printf("\nDuangDuang~~~\n", n1);
		tree(n1, n2, n3);
		count++;
		achievement(count);
		printf("\n欢迎再来~继续哦\n");


	}
	return main();
}
int tree(int n1,int n2,int n3)
{
	int a, b, c, i, j;

	b = 1+n2*((n1+n3)-1)+n2*(n1-1);/********b是最长的那一层，等于a 的最大值*********/

	for (  i = 1; i <= n1; i++)/**********改变n1就可以改变层数************/
	{
		for (j = 1; j <= (i + n3); j++)/*****每层有n1+n3行*****/
		{
			a = 1+n2*(j-1)+n2*(i-1 );/**********改变n2可以改变每行比上一行多几个************/
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
	case 1:printf("获得成就——\n【我的第一棵树】！！！\n"); break;
	case 3:printf("获得成就——\n【牝鹿】！！！\n"); break;
	case 5:printf("获得成就——\n【五棵松】！！！\n"); break;
	case 7:printf("获得成就——\n【圣诞老人】！！！\n"); break;
	case 10:printf("获得成就——\n【通关，没啦~】！！！\n"); break;
	default:
		break;
	}
}
