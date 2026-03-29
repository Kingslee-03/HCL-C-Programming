#include<stdio.h>
#include<string.h>
int main()
{
	char str[] = "a b c ";
	char res[20][20];
	int i=0,j=0;
	while(str[i]!='\0')
	{
		int k=0;
		while(str[i]!=' ' && str[i]!='\0')
		{
			res[j][k++]=str[i++];
		}
		j++;
	
		if(str[i]==' ')
				i++;
	}
	for(int a=j-1;a>=0;a--)	
		printf("%s ",res[a]);
}
