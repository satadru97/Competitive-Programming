/*    https://www.codechef.com/COOK94B/problems/CHEFRUN   */

#include<stdio.h>
int main()
{
    int t,x1,x2,x3,v1,v2;
    float t1,t2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d %d",&x1,&x2,&x3,&v1,&v2);
        t1=(float)(x3-x1)/(float)v1;
        t2=(float)(x2-x3)/(float)v2;
        if(t1>t2)
            printf("Kefa\n");
        else if(t2>t1)
            printf("Chef\n");
        else
            printf("Draw\n");
    }
    return 0;
} 
