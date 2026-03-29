#include<stdio.h>
int main()
{
	int a[]={1,1,5,9,5,9,7,4,4,6,3,3,6};
	int n=sizeof(a)/4;
	int res[n];
	for(int i=0;i<n;i++)
		res[i]=0;
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				res[i]++;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(res[i]==1)
		{
			printf("%d",a[i]);
		}
	}
	
	
}
