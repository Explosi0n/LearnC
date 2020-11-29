#include<stdio.h>
int main()     //输出1-100所有奇数
{	
    int i = 0;
	while(i<=100)
	{
		if(0 != i%2)
		{
			printf("%d\n",i);
		}
		i++;
	}
	getchar();
	return 0;
}