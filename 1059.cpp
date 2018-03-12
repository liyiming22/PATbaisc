#include <iostream>
#include <cmath>
#include <map>
using namespace std;

map <int, int> ma;

bool isprime ( int a )
{
	for ( int i = 2; i <= sqrt(a); i++ )
		if ( a % i == 0 )
			return false;
	return true;
}

int main()
{
	freopen("F://input.txt", "r", stdin);
	int N, id;
	cin >> N;
	string re[100001];
	cin >> id;
	re[id] = "Mystery Award";
	ma[id]++;
	for ( int i = 2; i <= N; i++ ) {
		cin >> id;
		if ( isprime(i) )	re[id] = "Minion";
		else if( !isprime(i) )	re[id] = "Chocolate";
		ma[id]++;
	}
	int K;
	cin >> K;
	int flag[100001] = {0};
	for ( int i = 1; i <= K; i++ ) {
		cin >> id;
		printf("%04d: ",id);
		if ( 0 == ma[id] )
			cout << "Are you kidding?";
		else if ( flag[id] )
			cout << "Checked";
		else {
			cout << re[id];
			flag[id] = 1;
		}
		cout << endl;
	}
	return 0;
}
