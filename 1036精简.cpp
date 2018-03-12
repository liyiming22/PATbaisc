#include <iostream>
using namespace std;

int main()
{
	int N;
	char ch;
	cin >> N >> ch;
	//行数，不用管奇偶 
	int line = (N + 1) / 2;
	for(int i = 0; i < line; i++){
		for(int j = 0; j < N; j++)
			//首行、尾行、首列、尾列输出字符，其他空格 
			if(i == 0 || i == line - 1 || j == 0 || j == N - 1)
				cout << ch;
			else
				cout << " ";
		cout << endl;
	}
	return 0;
}
