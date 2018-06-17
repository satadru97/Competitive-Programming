/*
    https://www.codechef.com/JUNE17/problems/GOODSET
    https://www.codechef.com/viewsolution/14012187
*/

#include<stdio.h>
int main()
{
    int t,k,i,n;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d",&n);
        for(i=500;i>(500-n);i--)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
