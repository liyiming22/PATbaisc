#include <iostream>
using namespace std;
//��ݹ�����Ҳ̫���������˰ɡ����� 
void fun(long long c, int d)
{
	if(0 == c / d){
		cout << c;
		return;
	}
	else{
		fun(c / d,d);
		cout << c % d;
	}
}

int main()
{
	long long A,B,C;
	int D;
	cin >> A >> B >> D;
	C = A + B;
	fun(C,D);
	return 0;
}
