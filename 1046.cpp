#include <iostream>
using namespace std;

int main()
{
	int ra = 0, rb = 0;
	int N;
	cin >> N;
	for(int i = 0; i < N; i++){
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if(b != d){
			if(b == (a + c))
				++rb;
			else if(d == (a + c))
				++ra;	
		}
	}
	cout << ra << " " << rb; 
	return 0;	
}

