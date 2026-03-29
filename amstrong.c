#include<stdio.h>
#include<math.h>
int main()
{
    int num,k;
    for(num=1;num<=1000;num++)
    {
        int res=0,n=0;
    k=num;
    while(k!=0)
    {
        n++;
        k/=10;
    }
    k=num;
    while(k!=0)
    {   int new=k%10;
        res+=pow(new,n);
        k/=10;
    }
    if(num==res)
    printf("%d\n",num);
    }

}

