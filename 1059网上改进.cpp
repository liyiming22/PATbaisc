#include <iostream>
#include <cmath>
using namespace std;

bool isprime ( int n )
{
	for ( int i = 2; i <= sqrt(n); i++ )
		if ( n % i == 0 )
			return false;
	return true;
}

int main()
{
	//freopen("F://input.txt","r",stdin);
	int N, in[10000];
	cin >> N;
	for ( int i = 1; i <= N; i++ ) {
		int id;
		cin >> id;
		in[id] = i;
	}
	int K;
	cin >> K;
	for ( int i = 1; i <= K; i++ ) {
		int id;
		cin >> id;
		printf("%04d: ",id);
		if ( in[id] == 1 )	cout << "Mystery Award";
		else if ( in[id] == 0 )	cout << "Are you kidding?";
		else if ( in[id] == -1 )	cout << "Checked";
		else if ( isprime(in[id]) )	cout << "Minion";
		else	cout << "Chocolate";
		if ( in[id] )	in[id] = -1;
		cout << endl;
	}
	return 0;
}
