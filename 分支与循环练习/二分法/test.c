#include<stdio.h>

int main()                            //在有序数组中查找某个数n
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};   
	int n = 0 ; 
	int sz = sizeof(arr)/sizeof(arr[0]);  //求数组长度
	int left = 0;                  //左下标
	int right= sz - 1;              //右下标
	int mid = 0 ;
	printf("请输入n的值:");
	scanf("%d",&n);

	while(left <= right)				//左下标大于右下标停止
	{
		mid = (left+right)/2;

		if(arr[mid] > n)              //比n大，往左查找
		{
			right = mid - 1;
		}
		else if (arr[mid] < n)
		{
			left = mid + 1 ;
		}
		else 
		{
			printf("找到了,下标为%d\n",mid);
			break ; 
		}
	}
	if(left > right)
	{
		printf("不存在\n");
	}



	return 0;
}