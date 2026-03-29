#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter the string: ");
	scanf("%s",str);
	int ch[250]={0};
	int i=0;
	while(str[i]!='\0')
		ch[tolower(str[i++])]++;
	for(int i=97;i<250;i++)
		if(ch[i]!=0 && ch[i]!=1)
			printf("%c  : %d\n",i,ch[i]);
}
