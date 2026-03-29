#include<stdio.h>
int main()
{
	int a[]={0,1,2,3,1,4};
	int n=sizeof(a)/4;
	int max=a[0]*a[1];
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if((a[j]*a[i])>max)
				max=a[j]*a[i];
	printf("%d",max);
}
