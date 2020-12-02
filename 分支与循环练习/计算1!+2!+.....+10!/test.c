#include<stdio.h>

int main()
{
	int i = 0;                 //计算1!+2!+.....+10!
	int num = 1;
	int n = 0;
	int result = 0;
	for(n=1; n<=10;n++)    //控制n的值1-10
	{
		for(i=1;i<=n;i++)  //计算n的阶乘
		{
			num = num*i;
		}
		result=result+num; 
	}
	printf("%d",result);

	return 0;
}