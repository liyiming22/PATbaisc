#include "stdio.h"

int main()
{
	char name[10][20]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int s[10];
	int i=0;
	int m=0;
	int count=0;
	/*long long n;
	scanf("%lld",&n);			//long long����󳤶�Ϊ2^63-1��������Ŀ����������Ӧ�����ַ�������ʾ�洢��
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
    printf("%s",name[s[m]]);	//�����ȷ�� 
	//printf("\b\n");			//�˷����� 
	return 0;
}
