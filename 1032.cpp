#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

map <int,int> ans;

int main()
{
	int N;
	//freopen("F://input.txt","r",stdin);
	//cin >> N;
	scanf("%d",&N);
	//int maxn = 0;
	int maxp = 0;
	for(int i = 0; i < N; i++){
		int pos;
		cin >> pos;
		int score;
		cin >> score;
		if(!ans.count(pos)) ans[pos] = 0;
		ans[pos] += score;
		if(ans[pos] > ans[maxp])
			//maxn = ans[pos];
			maxp = pos;
	}
	printf("%d %d\n",maxp,ans[maxp]);
	//cout << maxp << " " << ans[maxp] << endl;
	return 0;
}

