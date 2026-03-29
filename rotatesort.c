#include<stdio.h>
int  binary(int a[],int tar,int low,int high)
{
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(tar==a[mid])
		 return mid;
		if(a[mid]>=a[low])
		{
			if(tar<a[mid] && tar>=a[low])
				high=mid-1;
			else
				low=mid+1;
		}
		else
		{
			if(tar>a[mid]&&tar<=a[high])
				low=mid+1;
			else
				high=mid-1;
		}
	}
	return 0;
}
int main()
{
	int a[]={4,5,6,7,1,2,3,3};
	int low=0,high=(sizeof(a)/4)-1;
	int tar=3;
	int i=binary(a,tar,low,high);
	if(i)
		printf("Element found  : %d",i);
	else 
	printf("Not found");
}
