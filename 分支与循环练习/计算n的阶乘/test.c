#include<stdio.h>

int main()             //计算n的阶乘
{	
	int i = 0;
	int num = 1;
	int n = 0;
	printf("请输入n的值：\n");
	scanf("%d",&n);
	for(i=1 ; i<=n ; i++)
	{
		num = num*i;
	}
	printf("%d\n",num);

	return 0;
}