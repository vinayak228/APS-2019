#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,max=0,tmax=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        tmax=tmax+arr[i];
        if(tmax<0)
        {
            tmax=0;
        }
        if(max<tmax)
        {
            max=tmax;
        }
    }
    printf("%d",max);
    return 0;
}
