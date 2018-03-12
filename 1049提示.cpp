#include <iostream>
using namespace std;

//ÕÒ¹æÂÉ
int main()
{
	long long N;
	cin >> N;
	double sum = 0;
	for ( int i = 1; i <= N; i++ ) {
		long long num;
		num = ( N + 1 - i ) * i;
		double a;
		cin >> a;
		sum += a * num;
	}
	printf("%.2lf",sum);
	return 0;
}

