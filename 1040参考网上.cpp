#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[1000000];
	cin >> str;
	long long i = strlen(str);
	long long numP = 0, numA = 0, numT = 0;
	while ( i > 0 ){
		i--;
		if ( str[i] == 'T' )	++numT;
		else if ( str[i] == 'A' )	numA += numT;
		else	numP += numA; 
	}
	cout << numP % 1000000007 << endl;
	return 0;
}

