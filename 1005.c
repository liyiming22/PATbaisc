#include "stdio.h"

int main()
{
	int num;
	int i,j;
	scanf("%d",&num);
	int a[num];
	for(i = 0; i < num; i++)
		scanf("%d",&a[i]);
    for(i = 0; i < num; i++)
    {
        if(a[i] == 0)
            continue;
        int n = a[i];
        while(n != 1)
        {
            if(n % 2)
                n = (3 * n + 1) / 2;
            else
                n /= 2;
            for(j = 0; j < num; j++)
                if(a[j] == n){
                    a[j] = 0;
                    break;
                }
        }
    }
    //ÅÅĞò
    for(i = 0; i < num - 1; i++)
        for(j = 0; j < num - 1 - i; j++){
            if(a[j] < a[j + 1]){
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    //Êä³ö
    for(i = 0; i < num; i++){
        if(!a[i])
            break;
        else
            printf("%d%s",a[i],a[i + 1] > 0? " " : "");
            /***%cÊä³öÎª7365£¬why?***/
    }
    return 0;
}
