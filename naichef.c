/*        https://www.codechef.com/JUNE18B/problems/NAICHEF/          */

#include<stdio.h>
int main()
{
    int t,a,b,n,d[10000],i;
    double p1,p2;
    scanf("%d",&t);
    while(t--)
    {
        p1=0,p2=0;
        scanf("%d %d %d",&n,&a,&b);
        for(i=0;i<n;i++)
        {
            scanf("%d",&d[i]);
            if(d[i]==a)
                p1++;
            if(d[i]==b)
                p2++;
        }
        p1/=n;
        p2/=n;
        p1*=p2;
        printf("%lf\n",p1);
    }
    return 0;
}  
