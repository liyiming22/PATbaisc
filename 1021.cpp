#include <iostream>
#include <algorithm>
using namespace std;

struct data{
	int num;
	int name;
};

bool Cmp(data p, data q)
{
	return p.num > q.num; 
}

int main()
{
	char str[1000];
	cin >> str;
	struct data *p;
	p = (struct data *)malloc(10 * sizeof(struct data));
	for(int i = 0; i < 10; i++){
		p[i].num = 0;
		p[i].name = i;
	}
	for(int i = 0; str[i] != '\0'; i++)
		++p[str[i] % 48].num;
	sort(p,p + 10,Cmp);
	for(int i = 0; i < 10; i++)
		if(0 < p[i].num)
			cout << p[i].name << ":" << p[i].num << endl;
	return 0;
}

