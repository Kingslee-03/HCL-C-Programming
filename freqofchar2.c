#include<stdio.h>
int main()
{
	char str[]="aaabbbacdc";
	int c=1;
	int a[250]={0};
	for(int i=0;str[i]!='\0';i++)
		a[str[i]]++;
	for(int i=0;i<250;i++)
		if(a[i]!=0)
			printf("%c%d",i,a[i]);
}


