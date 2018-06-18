/*
    https://www.hackerrank.com/contests/world-codesprint-11/challenges/balanced-array
    https://www.hackerrank.com/contests/world-codesprint-11/challenges/balanced-array/submissions/code/1301767695
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100],i,n,s1=0,s2=0,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        s1+=a[i];
    }
    for(i=n/2;i<n;i++)
    {
        s2+=a[i];
    }
    x=abs(s1-s2);
    printf("%d",x);
    return 0;
}
