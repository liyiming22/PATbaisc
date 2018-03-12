#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int N;
	cin >> N;
	double max = 0.0;
	double mod;
	for(int i = 0; i < N; i++){
		int a, b;
		cin >> a >> b;
		mod = sqrt(a * a + b * b);
		if(mod > max)
			max = mod;
	}
	printf("%0.2lf",max);
	return 0;
}

