#include<stdio.h>
int main()
{
	int a[3][3]={	{1,2,3},
        			{2,3,1},
        			{2,1,3},
				};
				
	for(int i=0;i<3;i++)
	{
		int k[4]={0};
		for(int j=0;j<3;j++)
		{
			int n=a[i][j];
			if(k[n]!=0||n>3||n<1)
			{
				printf("Not a soduku");
				return 0;
			}
			k[n]++;
		}
		int q[4]={0};
		for(int j=0;j<3;j++)
		{
			int n=a[j][i];
			if(q[n]!=0||n>3||n<1)
			{
				printf("Not a soduku");
				return 0;
			}
			q[n]++;
		}
	}
	printf("Soduku");
}
