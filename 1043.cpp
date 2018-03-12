#include <iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int count = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == 'P' || s[i] == 'A' || s[i] == 'T' || s[i] == 'e' || s[i] == 's' || s[i] == 't'){
			++count;
		}
	}
	while(count){
		for(int i = 0; i < s.length(); i++){
			if(s[i] == 'P'){
				cout << s[i];
				s[i] = '0';
				--count;
				break;
			}
		}
		for(int i = 0; i < s.length(); i++){
			if(s[i] == 'A'){
				cout << s[i];
				s[i] = '0';
				--count;
				break;
			}
		}
		for(int i = 0; i < s.length(); i++){
			if(s[i] == 'T'){
				cout << s[i];
				s[i] = '0';
				--count;
				break;
			}
		}
		for(int i = 0; i < s.length(); i++){
			if(s[i] == 'e'){
				cout << s[i];
				s[i] = '0';
				--count;
				break;
			}
		}
		for(int i = 0; i < s.length(); i++){
			if(s[i] == 's'){
				cout << s[i];
				s[i] = '0';
				--count;
				break;
			}
		}
		for(int i = 0; i < s.length(); i++){
			if(s[i] == 't'){
				cout << s[i];
				s[i] = '0';
				--count;
				break;
			}
		}
	}
	return 0;
}
