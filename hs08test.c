/*
    https://www.codechef.com/problems/HS08TEST
    https://www.codechef.com/viewsolution/14239402
*/

#include<stdio.h>
int main()
{
    float x,y,n;
    scanf("%f %f",&x,&y);
    if(((int)x)%5==0 && (x+.5<=y))
        n=y-x-.5;
    else
        n=y;
    printf("%.2f",n);
    return 0;
} 
