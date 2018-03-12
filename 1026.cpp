#include <iostream>
using namespace std;

const int CLK_TCK = 100;

int main()
{
	long long C1, C2;
	scanf("%lld%lld",&C1, &C2);
	double sum = 0.5 + (double)(C2 - C1) / 100;
	printf("%02d:%02d:%02d",(int)sum / 3600,(int)sum % 3600 / 60,(int)sum % 3600 % 60);
	return 0;
}

