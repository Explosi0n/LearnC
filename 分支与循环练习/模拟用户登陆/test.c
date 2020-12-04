
#include<stdio.h>
#include<string.h>
int main()           //模拟用户登陆，并且只能登陆三次
{
	int i = 0;
	char password[] = "123";   //正确密码
	char pw[20] = {0};

	for(i=0;i<3;i++)
	{	
		printf("请输入密码：");
		scanf("%s",pw); 
		if( !(strcmp(password,pw)) )    //字符串比较函数strcmp(str1,str2)
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误请再次输入\n");
		}
	}
	if(i==3)
	{
		printf("连续错误三次，禁止登陆");
	}

	return 0;
}