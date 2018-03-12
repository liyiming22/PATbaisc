#include <iostream>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	int p[M + 1] = {0};
	int score[N + 1] = {0};
	int ans[M + 1] = {0};
	for(int i = 0; i < M; i++)
		scanf("%d",&p[i]);
	for(int i = 0; i < M; i++)
		scanf("%d",&ans[i]);
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			int n;
			cin >> n;
			if(n == ans[j])
				score[i] += p[j];
		}
	}
	for(int i = 0; i < N; i++)
		cout << score[i] << endl;
	return 0;
}

