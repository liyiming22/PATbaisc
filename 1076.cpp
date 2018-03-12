#include <iostream>
using namespace std;

int main()
{
	//freopen("F://input.txt","r",stdin);
	int N;
	cin >> N;
	int count = 0;
	//for ( int i = 0; i < N; i++ )
	while ( true ) { 
		string str;
		cin >> str;
		if ( 'T' == str[2] ) {
			++count;
			cout << (int)str[0] - 'A' + 1;
		}
		if ( N == count )	break;
	}
	return 0;
}
