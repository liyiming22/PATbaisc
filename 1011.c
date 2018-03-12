#include "stdio.h"
#include "stdlib.h"

struct three{
    long long a;
    long long b;
    long long c;
};

int main()
{
    struct three *num;
    int n;
    int i;
    scanf("%d",&n);
    num = (struct three *)malloc(n * sizeof(struct three));
    for(i = 0; i < n; i++){
        scanf("%lld",&num[i].a);
        scanf("%lld",&num[i].b);
        scanf("%lld",&num[i].c);
    }
    for(i = 0; i < n; i++){
        printf("Case #%d: %s\n",i + 1,(num[i].a + num[i].b) > num[i].c? "true" : "false");
    }
}
