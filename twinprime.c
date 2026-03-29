#include<stdio.h>
int main()
{
	int n=50,k=0,a=0;
	int arr[50]={0};
	for(int i=2;i<=50;i++)
	{
		int b=0;
		for(int j=2;j<=i;j++)
		{
			if(i%j==0)
				b++;
		}
		if(b<2)
			arr[k++]=i;
		b=0;
	}
	while(arr[a]!=0)
	{
		if((arr[a+1]-arr[a])==2)
			printf("(%d , %d)\n",arr[a],arr[a+1]);
		a++;
	}
	
	
}
