#include<stdio.h>
int main()
{
	int arr1[]={1,2,3};
	int arr2[]={2,7,9};
	int n1=sizeof(arr1)/4;
	int n2=sizeof(arr2)/4;
	int n=n1+n2;
	int res[n];
	int k=0;
	for(int i=0;i<n1;i++)
		res[k++]=arr1[i];
	for(int i=0;i<n2;i++)
		res[k++]=arr2[i];
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(res[j]>res[j+1])
			{
				int temp=res[j];
				res[j]=res[j+1];
				res[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
		printf("%d ",res[i]);
	printf("\n");
	int mid=n/2;
	if (n%2==0)
	{
		printf("sum: %d ",res[mid]+res[mid-1]);
		return 0;
	}
	
	printf("sum: %d ",res[mid]);
	
}
