#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int knap(int item ,int w)
{
    int i,j;
    int weight[item];
    int value[item];
    int dynam[item+1][w+1];
    for(i=1;i<=item;i++)
    {
        scanf("%d",&weight[i]);
        scanf("%d",&value[i]);
    }
    //memset(dynam, 0, sizeof(dynam[0][0]) * item+1 * w+1);
            for(j = 0; j <=item; j++)
        {
            for(i = 0; i <=w; i++)
            {
                dynam[j][i] = 0;
            }
        }
    for(i=1;i<=item;i++)
    {
        for(j=1;j<=w;j++)
        {
            if((j-weight[i])<0)
            {
                dynam[i][j]=dynam[i-1][j];

            }else if((j-weight[i])>=0)
            {
                if(dynam[i-1][j]>(dynam[i-1][j-weight[i]]+value[i]))
                {
                    dynam[i][j]=dynam[i-1][j];
                }else{
                    dynam[i][j]=dynam[i-1][j-weight[i]]+value[i];
                }
            }
            printf("%d\t",dynam[i][j]);
        }
        printf("\n");
    }
    return dynam[item][w];
}

int main()
{
    int w;
    int item,result=0;
    scanf("%d",&item);
    scanf("%d",&w);
    result=knap(item,w);
    printf("%d",result);
    return 0;
}
