/*
    https://www.codechef.com/LTIME49/problems/TWONMS
    https://www.codechef.com/viewsolution/14333918
*/

#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int t,k,a,b,n,max,min,c,d,r;
    long double s;
    scanf("%llu",&t);
    for(k=0;k<t;k++)
    {
        scanf("%llu %llu %llu",&a,&b,&n);
        d=n/2;
        c=n-d;
        s=((long double)a/(long double)b)*pow(2,c-d);
        if(s<1)
            s=1/s;
        r=(unsigned long long int)s;
        printf("%llu\n",r);
    }
    return 0;
}
