#include "stdio.h"
#include "math.h"
int main()
{
    int N;
    int count = 0;
    int k = 0;
    int i,j;
    int flag = 1;
    int a[100000];
//    int *a;
    scanf("%d",&N);
    for(i = 2; i <= N; i++){
        for(j = 2; j <= sqrt(i); j++)
            if(i % j == 0)
                flag = 0;
        if(flag){
           // a = (int *)malloc(sizeof(int));
            a[k++] = i;
        }

        flag = 1;
    }

    for(i = 0; i < k - 1; i++)
        if(a[i] - a[i + 1] == -2)
            count++;
    printf("%d",count);
    return 0;
}
