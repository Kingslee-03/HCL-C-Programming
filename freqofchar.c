#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="aaabbbacdc";
	int c=1;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==str[i+1])
		{
			c++;
		}
		else
		{
			printf("%c%d",str[i],c);
			c=1;
		}
	}
}
