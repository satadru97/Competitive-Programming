/*
    https://www.codechef.com/COOK95B/problems/NUMCOMP
    https://www.codechef.com/viewsolution/18933469
*/

#include<stdio.h>
#include<stdlib.h>
int main() 
{
	int t,a,b,n,r;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d %d",&a,&b,&n);
	    if(a==b)
	        r=0;
	    else if(n%2!=0)
	        r=a>b?1:2;
	    else
	    {
	        if(a==-b)
	            r=0;
	        else if(abs(a)>abs(b))
	            r=1;
	        else
	            r=2;
	    }
	    printf("%d\n",r);
	}
	return 0;
}
