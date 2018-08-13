/*
        https://www.codechef.com/AUG18B/problems/SPELLBOB
        https://www.codechef.com/viewsolution/19494362
*/

#include <stdio.h>
#include <string.h>
int main(void)
{
    int t;
    char top[3], bottom[3];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", top);
        scanf("%s", bottom);
        if(strcmp(top, "bob") == 0 || strcmp(bottom, "bob") == 0)
        {
            printf("yes\n");
            continue;
        }
        if(((top[0] == 'b' || bottom[0] == 'b') && (top[1] == 'b' || bottom[1] == 'b') && (top[2] == 'o' || bottom[2] == 'o'))||((top[0] == 'b' || bottom[0] == 'b') && (top[1] == 'o' || bottom[1] == 'o') && (top[2] == 'b' || bottom[2] == 'b'))||((top[0] == 'o' || bottom[0] == 'o') && (top[1] == 'b' || bottom[1] == 'b') && (top[2] == 'b' || bottom[2] == 'b')))
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
} 
