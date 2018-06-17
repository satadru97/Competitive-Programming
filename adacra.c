/*
    https://www.codechef.com/COOK83/problems/ADACRA
    https://www.codechef.com/viewsolution/14281071
*/

#include <stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int t,k,i,u,d;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
	    u=0;
	    d=0;
	    scanf("%s",str);
	    for(i=0;i<strlen(str);i++)
	    {
	        if(str[i]=='U')
	            u++;
	        else
	            d++;
	    }
	    for(i=0;i<strlen(str)-1;i++)
	    {
	        if(str[i]=='U' && str[i+1]=='U')
	            u--;
	        if(str[i]=='D' && str[i+1]=='D')
	            d--;
	    }
	    printf("%d\n",u<d?u:d);
	}
	return 0;
} 
