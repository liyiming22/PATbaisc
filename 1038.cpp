#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

map <int,int> sc;

int main()
{
	//freopen("F://input.txt","r",stdin);
	int N;
	cin >> N;
	for(int i = 0; i < N; i++){
		int score;
		cin >> score;
		if(!sc.count(score))	sc[score] = 0;
		sc[score]++;
	}
	int K;
	cin >> K;
	for(int i = 0; i < K; i++){
		int se;
		cin >> se;
		if(i == 0)	cout << sc[se];
		else	cout << " " << sc[se];
	}
	cout << endl;
	return 0;
}

