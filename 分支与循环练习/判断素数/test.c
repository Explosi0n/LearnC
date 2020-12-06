#include<stdio.h>
#include<math.h>
int main()                             //判断素数
{
	int i = 0;
	int n = 0;
	printf("请输入一个大于1的数：");
	scanf("%d",&n);
	for(i=2;i<= sqrt(n);i++)            //sqrt() ---- 开方
	{
		if(n%i == 0)
		{
			break ;
		}
	}
	if(i <= sqrt(n))
	{
		printf("该数为合数");
	}
	else if(i > sqrt(n))
	{
		printf("该数为质数");
	}


	return 0;
}