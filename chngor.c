/*
    https://www.codechef.com/COOK84/problems/CHNGOR
    https://www.codechef.com/viewsolution/14648921
*/

#include<stdio.h>
int main()
{
    unsigned long long int a[100000],t,n,sum,i;
    scanf("%llu",&t);
    while(t--)
    {
        sum=0;
        scanf("%llu",&n);
        for(i=0;i<n;i++)
        {
            scanf("%llu",&a[i]);
            sum=sum | a[i];
        }
        printf("%llu\n",sum);
    }
    return 0;
}
