#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct team{
	int sid;
	int score;
};

bool Cmp(team a, team b)
{
	return a.score > b.score;
}

int main()
{
	int N;
	cin >> N;
	int count = 0;
	vector <team> t;
	while(N){
		int flag = 1;
		int si;
		cin >> si;
		char ch;
		ch = getchar();
		ch = getchar();
		ch = getchar();
		int sc;
		cin >> sc;
		//存在这个队伍的情况： 
		for(vector <team> :: iterator it = t.begin(); it != t.end(); ++it){
			if(it -> sid == si){
				it -> score += sc;
				flag = 0;
				break;
			}
		}
		//不存在这个队伍 
		if(flag){
			team tt;
			tt.score = sc;
			tt.sid = si;
			t.push_back(tt);
		}
		N--;
	}
	sort(t.begin(), t.end(),Cmp);
	vector <team> :: iterator iter = t.begin();
	cout << iter -> sid << " " << iter -> score;
	return 0;
}

