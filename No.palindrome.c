#include <stdio.h>

int main() {
    int n=6738;
    int k=0,c=0;
    int b=n;
    while(n>0)
    {   int  a=n/10;
        c++;
    }
    while(b>0)
    {
        int d=b%10;
        k+=d;
        while(c>1)
        {
            k*=10;
            c--;
        }
        b/=10;
    }
    printf("%d",k);
}

