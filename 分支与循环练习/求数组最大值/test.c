#include<stdio.h>

int main()                                       //求数组最大值
{
	int arr[]={2,2,3,4,5,6,7,7,8,9,12,3,5};
	int max = arr[0];                            //int max = 0存在局限性    
	int sz = sizeof(arr)/sizeof(arr[0]);
	int i = 0 ;
	
	for(i=0;i<sz;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("最大值为%d\n",max);

	return 0;
}