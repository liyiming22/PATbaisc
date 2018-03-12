#include "stdio.h"

int main()
{
    int n;
    int i;
    int max = 0;
    scanf("%d",&n);
    for(i = 0; i < n / 100; i++)
        printf("%c",'B');
    if(n / 100 > max)
        max = n / 100;
    n %= 100;
    if(n / 10 > max)
        max = n / 10;
    for(i = 0; i < n / 10; i++)
        printf("%c",'S');
    if(n % 10 > max);
        max = n % 10;
    for(i = 1; i <= max; i++)
        printf("%d",i);
    return 0;
}
