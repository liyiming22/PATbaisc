#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	//freopen("F://inpupt.txt","r",stdin);
	int N, D;
	float e;
	float per = 0;
	float mus = 0;
	cin >> N >> e >> D;
	//cout << "sdasd: " << N << e << D;
	for(int i = 0; i < N; i++){
		int day;
		cin >> day;
		int lo = 0;
		for(int j = 0; j < day; j++){
			float n;
			cin >> n;
			if(e > n)
				++lo;
		}
		if(lo > day / 2){
			//cout << "No." << i + 1 << "islo" << endl;
			if(day > D)	++mus;
			else	++ per;
		}
	}
	per /= N;
	per *= 100;
	mus /= N;
	mus *= 100;
	//末尾不要加回车格式就正确了 
	printf("%.1f%c %.1f%c",per,'%',mus,'%');
	cout << endl;
	return 0;
}

