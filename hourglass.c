/*
    https://www.hackerrank.com/contests/hostel-challenge-2-0/challenges/hourglass
    https://www.hackerrank.com/contests/hostel-challenge-2-0/challenges/hourglass/submissions/code/1301476427
*/

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k;
   for(i=3;i>0;i--)
   {
       for(k=abs(i-3);k>0;k--)
       {
           printf("  ");
       }
       for(j=0;j<2*i+1;j++)
       {
           printf("* ");
       }
       printf("\n");
   }
   printf("      *\n");
   for(i=3;i>0;i--)
   {
       for(k=i;k>1;k--)
       {
           printf("  ");
       }
       for(j=0;j<(2*abs(i-3))+3;j++)
       {
           printf("* ");
       }
       printf("\n");
   }
    return 0;
}
