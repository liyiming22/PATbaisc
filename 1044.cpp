#include <iostream>
#include <sstream>
using namespace std;

const string mars1[14] = {"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
const string mars2[14] = {"tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};

void toMars ( string s )
{
	int n;
	stringstream ss(s);
	ss >> n;
	if ( n <= 12 )	cout << mars1[n];
	else {
		//这里还要加上判断，当数字为13的整数倍时，不需要输出末尾的零
		if ( n % 13 )
			cout << mars2[n / 13 - 1] << " " << mars1[n % 13];
		else
			cout << mars2[n / 13 - 1];
	}
}

void toEarth ( string s )
{
	if ( s.length() <= 3 ) {
		int flag = 1;
		for ( int i = 0; i <= 13; i++ )
			if ( mars1[i] == s ) {
				cout << i;
				flag = 0;
				break;
			}
		if ( flag )
			for ( int i = 0; i <= 11; i++ )
				if ( mars2[i] == s ) {
					cout << (i + 1) * 13;
					break;
				}
	}
	else {
		string a, b;
		int sum = 0;
		for ( int i = 0; i < 3; i++ )	a += s[i];
		for ( int i = 4; i <= 6; i++ )	b += s[i];
		for ( int i = 0; i <= 11; i++ )
			if ( mars2[i] == a ) {
				//这里一开始也没想到，写的是i + 13...
				sum += 13 * (i + 1);
				break;
			}
		for ( int i = 0; i <= 13; i++ )
			if ( mars1[i] == b ) {
				sum += i;
				break;
			}
		cout << sum;
	}
}

int main()
{
//	freopen("F://input.txt","r",stdin);
	int N;
	cin >> N;
	getchar();
	for ( int i = 0; i < N; i++ ) {
		string s;
		char ch;
		//自己写的输入一整行，务必记住
		while ( ch = getchar() ) {
			if ( ch == '\n' )	break;
			else	s += ch;
		}
		if ( s[0] >= '0' && s[0] <= '9' )	toMars(s);
		else	toEarth(s);
		cout << endl;
	}
	return 0;
}
