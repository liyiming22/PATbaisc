#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector <int> ans(N);
	for(int i = 0; i < N; i++)
		scanf("%d",&ans[i]);
	sort(ans.begin(), ans.end());
	int re = ans[0];
	for(int i = 1; i < N; i++)
		re = (re + ans[i]) / 2;
	cout << re << endl;
	return 0;
}

