/*
    https://www.codechef.com/JULY17/problems/NITIKA
    https://www.codechef.com/viewsolution/14474351
*/

#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,p,t,k;
    char str[32];
    scanf("%d",&t);
    k=t++;
    while(t--)
    {
        p=-1;
        gets(str);
        n=strlen(str);
        for(i=n-1;i>=0;i--)
        {
            if(str[i]==' ')
            {
                p=i;
                break;
            }
        }
        str[0]=toupper(str[0]);
        for(i=p+1;i>=0;i--)
        {
            str[i]=toupper(str[i]);
        }
        for(i=p+2;i<n;i++)
        {
            str[i]=tolower(str[i]);
        }
        if(p!=-1)
        {
            printf("%c. ",str[0]);
        }
        for(i=0;i<p-1;i++)
        {
            if(str[i]==' ')
            {
                printf("%c. ",str[i+1]);
            }
        }
        for(i=p+1;i<n;i++)
        {
            printf("%c",str[i]);
        }
        if(t!=k)
        {
            printf("\n");
        }
    }
    return 0;
}
