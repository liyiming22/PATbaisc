#include <iostream>
using namespace std;

string Caul ( string a )
{
	string b;
	int flag = 0;
	for ( int i = 0; i < a.length(); i++ ) {
		int x = (int)(a[i] - '0');
		int y = (int)(a[a.length() - 1 - i] - '0');
		int sum = 0;
		if ( flag ) {
			sum = 1;
			flag = 0;	
		}
		sum = sum + x + y;
		if ( sum >= 10 ) {
			flag = 1;
			if ( i != a.length() - 1 )	sum -= 10;
		}
		if ( sum < 10 )	b += (char)(sum + '0');
		else {
			b += (char)(sum % 10 + '0');
			b += '1';
		}
	}
	string c;
	for ( int i = 0; i <= b.length() - 1; i++ )
		//一开始这样写死活return不了c,第二行正确~ 
		//c[i] = b[b.length() - 1 - i];
		c += b[b.length() - 1 - i];
	return c;
}

bool IsPamic ( string a )
{
	for ( int i = 0; i < a.length() / 2; i++ )
		if ( a[i] != a[a.length() - 1 - i] )
			return false;
	return true;
}

int main()
{
	string num;
	cin >> num;
	//第一个坑点，直接就是回文数，就不需要后面的计算，直接输出 
	if ( IsPamic(num) ) {
		cout << num << " is a palindromic number.";
		return 0;
	}
	int  flag = 1;
	for ( int i = 0; i < 10; i++ ) {
		cout << num << " + ";
		for ( int j = num.length() - 1; j >= 0; j-- )	cout << num[j];
		cout << " = ";
		num = Caul(num);
		cout << num << endl;
		if ( IsPamic(num) ) {
			cout << num << " is a palindromic number.";
			flag = 0;
			break;
		}
	}
	if ( flag )	cout << "Not found in 10 iterations." << endl;
	return 0;
}
