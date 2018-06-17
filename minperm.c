/*
    https://www.codechef.com/SEPT17/problems/MINPERM
    https://www.codechef.com/viewsolution/15324458
*/
#include<stdio.h>
int main()
{
    int n,i,t,op[100001];
    scanf("%d",&t);
    while(t--)
    {
        int status[100001]={0};
        scanf("%d",&n);
        op[1]=2;
        status[2]=1;
        for(i=2;i<=n-2;i++)
        {
            if(status[i-1]!=1)
            {
                op[i]=i-1;
                status[i-1]=1;
            }
            else
            {
                op[i]=i+1;
                status[i+1]=1;
            }
        }
        op[n-1]=n;
        if(n%2==0)
            op[n]=n-1;
        else
            op[n]=n-2;
        for(i=1;i<=n;i++)
            printf("%d ",op[i]);
        printf("\n");
    }
    return 0;
} 
