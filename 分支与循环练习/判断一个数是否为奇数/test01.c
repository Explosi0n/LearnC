#include<stdio.h>
int main()                 //判断奇偶性
{	int a = 0;
	int b = 0;
    printf("判断奇偶性，请输入一个数：\n");
	scanf("%d",&a);
	b = a%2 ; 
	if (0 == b)
	{
		printf("该数为偶数");
	}
	else 
	{
		printf("该数为奇数");
	}
	getchar();
	getchar(); 
	return 0;
}