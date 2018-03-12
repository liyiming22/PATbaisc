#include <iostream>
using namespace std;

int main()
{
	string str;
	cin >> str;
	string ss;
	cin >> ss;
	int count = 0;
	for(int i = 0; i < str.length(); i++){
		for(int j = 0; j < ss.length(); j++){
			if(str[i] == ss[j]){
				str[i] = '*';
				ss[j] = '/';
				++count;
			}
		}
	}
	if(count == ss.length())
		cout << "Yes " << str.length() - count;
	else
		cout << "No " << ss.length() - count;
	return 0;
}

