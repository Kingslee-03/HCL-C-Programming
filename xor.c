#include<stdio.h>
int main()
{
	int arr[] = {3,4,6,3,4,9,7,6,9,8,8,7};
	int res=0;
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
		res^=arr[i];
	printf("%d",res);
}
