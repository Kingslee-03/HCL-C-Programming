#include<stdio.h>
int main()
{
	int mat[3][2]={	{1,2},
					{4,5},
					{7,8}};
	int top=0,bot=2,left=0,right=1;
	while(left<=right&&bot>=top)
	{
		for(int i=left;i<=right;i++)
			printf("%d ",mat[top][i]);
		top++;
		for(int i=top;i<=bot;i++)
			printf("%d ",mat[i][right]);
		right--;
		if(bot>=top)
		{
			for(int i=right;i>=left;i--)
				printf("%d ",mat[bot][i]);
			bot--;
		}
		if(left<=right)
		{
			for(int i=bot;i>=top;i--)
				printf("%d ",mat[i][left]);
			left++;
		}
	}
}
