/*
    https://www.hackerrank.com/contests/hostel-challenge-2-0/challenges/butter-fly-2
    https://www.hackerrank.com/contests/hostel-challenge-2-0/challenges/butter-fly-2/submissions/code/1301489270
*/

#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    if(n>1 && n<20)
    {
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<=i;j++)
            {
                printf("* ");
            }
            for(k=0;k<2*(2*n-2*i-3);k++)
            {
                printf(" ");
            }
            for(j=0;j<=i;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for(i=0;i<2*n-1;i++)
        {
            printf("* ");
        }
        for(i=0;i<n-1;i++)
        {
            printf("\n");
            for(j=0;j<n-i-1;j++)
            {
                printf("* ");
            }
            for(k=0;k<2*(2*i+1);k++)
            {
                printf(" ");
            }
            for(j=0;j<n-i-1;j++)
            {
                printf("* ");
            }
        }
    }
    return 0;
}
