#include "stdio.h"
#include "math.h"

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int i,j;
	int flag;
	int count = 0;
	int pos = 0;
	for(i = 2; i <= 1000000; i++){
		flag = 1;
		for(j = 2; j <= sqrt(i); j++){
			if(0 == i % j){
				flag = 0;
				break;
			}
		}
		if(flag){
			pos++;
			if(n > pos && m <= pos){
				count++;
				printf("%d",i);
				if(0 == count % 10 && 0 != count)
					printf("\n");
				else
					printf(" ");
			}
			if(n == pos){
				printf("%d",i);
				return 0;
			}
		}
	}
	return 0;
}
