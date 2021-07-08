#include<stdio.h>
#include<math.h>
int main()
{
	int *a,n,i,j,sum=0;
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*(n+1));
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
		sum+=pow(a[i],2)*i;
		for(j=1;j<i;j++)
			sum+=a[i]*a[j]*j;
	}
	printf("%d",sum%(int)(pow(10,9)+7));
	return 0;
}