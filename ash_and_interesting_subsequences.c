/*
    https://www.hackerrank.com/contests/hostel-challenge-2-0/challenges/ash-and-interesting-subsequences
    https://www.hackerrank.com/contests/hostel-challenge-2-0/challenges/ash-and-interesting-subsequences/submissions/code/1301506348
*/

#include<stdio.h>
#include<string.h>
int main()
{
    unsigned char str[1000000];
    unsigned int l;
    int i,j,t,k,total=0,count=0;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        total=0,count=0;
        scanf("%u",&l);
        scanf("%s",str);
        for(j=0;j<l;++j)
        { //s.length or till wherever you want to find
            if(str[j] == 'A') 
                total+=count;
            else if(str[j]=='S')  
                count++;
        }
        printf("%d\n",total);
    }
    return 0;
}
