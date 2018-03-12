#include <iostream>
using namespace std;

int main()
{
	int g,s,k;
	scanf("%d.%d.%d",&g,&s,&k);
	int sum = 17 * 29 * g + 29 * s + k;
//	cout << sum;
	scanf("%d.%d.%d",&g,&s,&k);
	int has = 17 * 29 * g + 29 * s + k;
//	cout << has;
	int change = has - sum;
//	cout << change << endl;
	if(change >= 0) 
		cout << change / (17 * 29) << "." << change % (17 * 29) / 29 << "." << change % (17 * 29) % 29;
	else
		cout << change / (17 * 29) << "." << -change % (17 * 29) / 29 << "." << -change % (17 * 29) % 29;
	return 0;
}
