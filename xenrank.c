/*
    https://www.codechef.com/JUNE17/problems/XENRANK
    https://www.codechef.com/viewsolution/14044114
*/

#include<stdio.h>
int main()
{
    unsigned long long int u,v,c=0,i,j;
    int t,k;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%llu %llu",&u,&v);
        c=(u+v)*(u+v+1)/2;
        printf("%llu\n",c+u+1);
    }
    return 0;
}
