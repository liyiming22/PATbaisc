#include <stdio.h>

struct Info{
	char name[11];
	char sid[11];
	int score;
};

int main()
{
	int n;
	int i;
	scanf("%d",&n);
	struct Info *stu;
	/***�൱�ڶ�����һ���ṹ������***/ 
	stu = (struct Info *)malloc(n * sizeof(struct Info)); 
	/***struct�����٣�***/
	 
	for(i = 0; i < n; i++)
		scanf("%s %s %d",stu[i].name,stu[i].sid,&stu[i].score);
	int max = 0;
	int min = 0;
	for(i = 0; i < n; i++){
		if(stu[i].score > stu[max].score)
			max = i;
		if(stu[i].score < stu[min].score)
			min = i;
	}
	printf("%s %s\n",stu[max].name,stu[max].sid);
	printf("%s %s\n",stu[min].name,stu[min].sid);
	return 0;
}
