#include <iostream>
using namespace std;

int main()
{
	int N;
	char ch;
	cin >> N >> ch;
	for(int i = 0; i < N; i++)
		cout << ch;
	int line;
	if(N % 2 != 0)
		line = (N + 1) / 2 - 2;
	else
		line = N / 2 - 2;
	for(int i = 0; i < line; i++){
		cout << endl;
		for(int j = 0; j < N; j++){
			if(j == 0 || j == N - 1)
				cout << ch;
			else
				cout << " ";
		}
	}
	cout << endl;
	for(int i = 0; i < N; i++)
		cout << ch;
	return 0;
}

