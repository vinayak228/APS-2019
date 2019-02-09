#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num,i;
    printf("Enter the number");
    scanf("%d",&num);
    int arr[num];
    memset(arr,0,sizeof(arr)+4);
    arr[0]=1;
    i=3;
    while(i<=num)
    {
        if(arr[i-3]>0)
        {
           arr[i]=arr[i]+arr[i-3];
        }
        i=i+3;
    }
    for(i=5;i<=num;i++)
    {
        if(arr[i-5]>0)
        {
           arr[i]=arr[i]+arr[i-5];
        }
    }

    for(i=10;i<=num;i++)
    {
        if(arr[i-10]>0)
        {
           arr[i]=arr[i]+arr[i-10];
        }
    }
    printf("%d\n",arr[num]);
    return 0;
}
