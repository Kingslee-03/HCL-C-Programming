#include<stdio.h>
#include<limits.h>
int main()
{
	int coins[]={3,5,9};
	int n=3;
	int tar =10;
	int dp[tar+1];
	dp[0]=0;
	for(int i=1;i<=tar;i++)
		dp[i]=INT_MAX;
	for(int i=1;i<=tar;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(coins[j]<=i && dp[i-coins[j]]!=INT_MAX)
			{
				if(dp[i]>dp[i-coins[j]]+1)
				{
					dp[i]=dp[i-coins[j]]+1;
				}
			}
		}
	}
	if(dp[tar]<INT_MAX)
	printf("Min coins: %d",dp[tar]);
	else
	printf("Invalid");
	
}
