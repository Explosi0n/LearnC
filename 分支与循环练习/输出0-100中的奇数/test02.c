#include<stdio.h>
int main()     //���1-100��������
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