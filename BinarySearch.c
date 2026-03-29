#include<stdio.h>
int binary(int arr[],int low, int high,int tar)
{
	int mid=(high+low)/2;
	if(low>high)
	{
		printf("Element not found");
		return 0;
	}
	if(arr[mid]==tar)
		{
			printf("Element found");
			return 0;
		}
	else if(arr[mid]>tar)
	{
		binary(arr,low,mid-1,tar);
		
	}
	else if(arr[mid]<tar)
	{
		binary(arr,mid+1,high,tar);
		
	}	
}
int main()
{
	int arr[]={2,5,8,12,17,19,20};
	int target=21;
	int low=0;
	int high=(sizeof(arr)/4)-1;
	binary(arr,low,high,target);
}
