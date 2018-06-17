/*
    https://www.codechef.com/IEMCO17/problems/PHEONIX
    https://www.codechef.com/viewsolution/13418934
*/

#include<stdio.h>
int main()
{
    int rank[100],hostel_id[100];
    int i,f=1,k,N,T;
    scanf("%d",&T);
    for(k=0;k<T;k++)
    {
        f=1;
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {
            scanf("%d",&hostel_id[i]);
        }
        for(i=0;i<N;i++)
        {
            scanf("%d",&rank[i]);
        }
        for(i=0;i<N-1;i++)
        {
            if(hostel_id[i]!=hostel_id[i+1])
                f=0;
        }
        for(i=0;i<N;i++)
        {
            if(rank[i]<15)
                f=0;
        }
        if(f==1)
            printf("Party\n");
        else
            printf("No Party\n");
    }
    return 0;
}
