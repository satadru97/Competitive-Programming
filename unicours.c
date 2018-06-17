/*
    https://www.codechef.com/MAY17/problems/UNICOURS
    https://www.codechef.com/viewsolution/13570798
*/

#include<stdio.h>
int main()
{
    unsigned long long int t,i,n,j,p,a[100000];
    scanf("%llu",&t);
    for(i=0;i<t;i++)
    {
        p=0;
        scanf("%llu",&n);
        for(j=0;j<n;j++)
        {
            scanf("%llu",&a[j]);
        }
        for(j=0;j<n;j++)
        {
            if(a[j]>p)
                p=a[j];
        }
        printf("%llu\n",n-p);
    }
    return 0;
}
