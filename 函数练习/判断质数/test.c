#include<stdio.h>
#include<math.h>

int is_prime(int x)                  //是质数返回1，不是返回0.
{
	int i = 0;
	for(i=2; i<=sqrt(x); i++ )
	{
		if((x%i)==0)
		{
			break;
		}
	}
	if((i>sqrt(x)) && (x>1))
	{
		return 1;
	}
	else
	{
		return 0;
	}

}

int main()                            //输入一个数判断是不是质数。
{
	int input = 0;
	printf("请输入一个数:");
	scanf("%d",&input);
	if(is_prime(input)==0)
	{
		printf("不是质数\n");
	}
	else 
	{
		printf("是质数\n");
	}

	return 0;
}