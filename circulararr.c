#include <stdio.h>
int main()
{
    int arr[] = {5,6,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
    {
        int b=0;
        for(int j=1;j<n;j++)
        {
            int k =(i+j)%n;
            if(arr[k]>arr[i])
            {
                printf("%d ",arr[k]);
                b=1;
                break;
            }
        }
        if(!b)
            printf("-1 ");
    }
}
