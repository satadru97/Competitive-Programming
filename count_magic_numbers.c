/*
    https://www.hackerrank.com/contests/hostel-challenge-2-0/challenges/count-magic-numbers/problem
    https://www.hackerrank.com/contests/hostel-challenge-2-0/challenges/count-magic-numbers/submissions/code/1301477594
*/

#include <stdio.h>
#include<stdlib.h>
int main()
{
    unsigned long int T,X,i,*A,count=0;
    scanf("%lu%lu",&T,&X);
    A=(unsigned long int*)malloc(T * sizeof(unsigned long int));
    for(i=0;i<T;i++)
    {
        scanf("%lu",&A[i]);
    }
    if(T>=1 && X<=10000000)
    {
        for(i=0;i<T;i++)
        {
            if(A[i]%X==0)
                count++;
        }
    }
    printf("%lu",count);
    return 0;
}
