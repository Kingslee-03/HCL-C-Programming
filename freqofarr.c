#include<stdio.h>
int main()
{
	int a[]={1,2,0,0,3,2,4,5,1,3,1,8};
	int n=sizeof(a)/4;
	int res[500]={0};
	
	for(int i=0;i<n;i++)
	{
		res[a[i]]++;
	}
	for(int i=0;i<500;i++)
	{
		if(res[i]!=0)
		printf("%d: %d\n",i,res[i]);
	}
}
