#include <iostream>
using namespace std;

int main()
{
	int N;
	char ch;
	cin >> N >> ch;
	//���������ù���ż 
	int line = (N + 1) / 2;
	for(int i = 0; i < line; i++){
		for(int j = 0; j < N; j++)
			//���С�β�С����С�β������ַ��������ո� 
			if(i == 0 || i == line - 1 || j == 0 || j == N - 1)
				cout << ch;
			else
				cout << " ";
		cout << endl;
	}
	return 0;
}
