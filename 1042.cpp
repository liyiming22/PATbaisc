#include <iostream>
#include <string>
using namespace std;

int main()
{
	string c;
	getline(cin,c);
	int num[128] = {0};
	for(int i = 0; i < c.length(); i++){
		if(c[i] >= 'a' && c[i] <= 'z')
			num[c[i]]++;
		else if(c[i] >= 'A' && c[i] <= 'Z'){
			c[i] -= 'A';
			c[i] += 'a';
			num[c[i]]++;
		}
	}
	int max = 0;
	char ch;
	for(int i = 'a'; i <= 'z'; i++){
		if(num[i] > max){
			ch = char(i);
			max = num[i];
		}
	}
	cout << ch << " " << max << endl;
	return 0;
}

