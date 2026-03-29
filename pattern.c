#include<stdio.h>
int main()
{
	int n=4,k=5;
	for(int i=1;i<=k;i++)
	{
		for(int j=0;j<i;j++)
		{
			(j%2==0)?printf("*"):printf("#");
		}
		printf("\n");
	}
}
