#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="hello";
	char str2[]="hello";
	int n1=strlen(str1);
	int n2=strlen(str2);
	if(n1!=n2) 
	{
		printf("not an anagram");
		return 0;
	}
	char str[200]={0};
	for(int i=0;i<n1;i++)
	{
		str[str1[i]]++;
		str[str2[i]]--;
	}
	for(int i=0;i<200;i++)
{
	if(str[i]!=0)
	{
		printf("not an anagram");
		return 0;
		
	}

}
	printf("anagram");
}
