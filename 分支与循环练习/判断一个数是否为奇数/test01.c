#include<stdio.h>
int main()                 //�ж���ż��
{	int a = 0;
	int b = 0;
    printf("�ж���ż�ԣ�������һ������\n");
	scanf("%d",&a);
	b = a%2 ; 
	if (0 == b)
	{
		printf("����Ϊż��");
	}
	else 
	{
		printf("����Ϊ����");
	}
	getchar();
	getchar(); 
	return 0;
}