#include<stdio.h>
int main()
{
	int a[]={0,4,6,0,7,2,0,6,0};
	int n=sizeof(a)/4;
	int res[n];
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			res[j++]=a[i];
		}
	}
	while(j<n)
	{
		res[j++]=0;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",res[i]);
	}
}
