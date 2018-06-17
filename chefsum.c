/*
    https://www.codechef.com/SEPT17/problems/CHEFSUM
    https://www.codechef.com/viewsolution/15209584
*/

#include<stdio.h>
int main()
{
	int t,n,a[100000],i,min,r;
	scanf("%d",&t);
	while(t--)
	{
		min=2147483647;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(min>a[i])
			{
				min=a[i];
				r=i+1;
			}
		}
		
		printf("%d\n",r);
	}
	return 0;
} 
