/*
    https://www.codechef.com/MAY17/problems/CHEFROUT
    https://www.codechef.com/viewsolution/13565458
*/

#include <stdio.h>
#include<string.h>
int main(void)
{
    int f,i,j,k,t;
    unsigned char str[100000];
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        f=1;
        scanf("%s",&str);
        for(i=0;i<strlen(str)-1;i++)
        {
            if(str[i]=='E' && str[i+1]=='C')
                f=0;
            if(str[i]=='S' && (str[i+1]=='C' || str[i+1]=='E'))
                f=0;
        }
        if(f==0)
            printf("no\n");
        else
            printf("yes\n");
    }
    return 0;
} 
