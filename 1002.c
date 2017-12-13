#include "stdio.h"

int main()
{
	char name[10][20]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int s[10];
	int i=0;
	int m=0;
	int count=0;
	/*long long n;
	scanf("%lld",&n);			//long long的最大长度为2^63-1，所以题目样例超出，应该用字符串来表示存储！
	while(n){
		m+=n%10;
		n/=10;
	}*/
	char str[100];
	gets(str);
 	while(str[i]!='\0'){
	 	m+=str[i]-'0';
	 	i++;
 	}
	//printf("%d\n",m);
	while(m){
		s[count++]=m%10;
		m/=10;
	}
	count--;
	for(m=count;m>0;m--)
		printf("%s ",name[s[m]]);
    printf("%s",name[s[m]]);	//输出正确！ 
	//printf("\b\n");			//此法错误！ 
	return 0;
}
