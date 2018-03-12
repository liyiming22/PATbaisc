#include <iostream>
#include <malloc.h>
using namespace std;

struct stu{
//	string sid;
	long long sid;
//	char sid[20];
	int vr;
	int re;
};

int main()
{
	int N;
	cin >> N;
	struct stu * s = (struct stu *)malloc(N * sizeof(struct stu));
	for(int i = 0; i < N; i++){
		cin >> s[i].sid;
		cin >> s[i].vr;
		cin >> s[i].re;
	}
//	cout << s[0].sid << endl;
	int num;
	cin >> num;
	for(int i = 0; i < num; i++){
		int no;
		cin >> no;
		for(int j = 0; j < N; j++){
			if(s[j].vr == no){
				cout  << s[j].sid << " " << s[j].re << endl;
				break;
			}
		}
	}
	return 0;
}

