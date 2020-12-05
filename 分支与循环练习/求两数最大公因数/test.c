#include<stdio.h>

int main()                         //求两数最大公因数
{
	int n = 0;
	int m = 0;
	int r = 1;
	printf("请输入两个数：");
	scanf("%d%d",&n,&m);

	while(r)
	{
		r = n%m;

		if(r!= 0)
		{
			n = m;
			m = r;
		}
		else
		{
			printf("最大公约数是%d\n",m);
		}
	}

	return 0;
}