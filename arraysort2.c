#include<stdio.h>
int main()
{
	int a[]={1,2,0,0,2,1,1,0,2,1,2,0,1,2};
	int n=sizeof(a)/sizeof(a[0]);
	int r=n-1,l=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			int temp=a[i];
			a[i]=a[l];
			a[l]=temp;
			l++;
		}
	}
	for(int i=n-1;i>=l;i--)
	{
		if(a[i]==2)
		{
			int temp=a[i];
			a[i]=a[r];
			a[r]=temp;
			r--;
		}
	}
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
}
