#include<stdio.h>
int main()                     //打印99乘法表
{
	int i = 0;
	int j = 0;
	for(i=1; i<=9; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%dx%d=%-2d ",i,j,i*j);   
		}
		putchar('\n');
	}
	return 0;
}