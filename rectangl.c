/*    
    https://www.codechef.com/JAN18/problems/RECTANGL    
    https://www.codechef.com/viewsolution/16769126
*/

#include<stdio.h>
int main()
{
	int a,b,c,d,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d %d",&a,&b,&c,&d);
		if((a==b && c==d)||(a==c && b==d)||(a==d && b==c))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
} 
