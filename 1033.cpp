/*
易错点：
1.上档键坏掉所有的大写字母无法输出
2.只说了第二行保证非空，没说第一行非空，所以第一行也有可能是空的。。。
但是为啥还是不能满分？
还有3分扣在哪里呢？
知道了= =
我这个智商啊，真的是
做了那么多题目了，一点长进都没有啊
简简单单的一道题目，做了半天，烦。。
一开始写的不完整，把坏的全部转换为小写，后面判断当map为0时，只有字母为大写并且上档键坏掉时不输出
还有一种可能就是同一个字母，上档键虽然没坏，但是map会同样为0，因为全部转换为小写了= =。
其实这道题目直接在线处理才是最好的。。
*/

#include <iostream>
#include <map>
using namespace std;

int main()
{
	bool flag = false;
	string bad, inp;
//	cin >> bad >> inp;
	getline(cin,bad);
	getline(cin,inp);
	if ( bad == "" ) {
		cout << inp;
		return 0;
	}
	map <char,int> ma;
	for ( int i = 0; bad[i] != '\0'; i++ ) {
		if ( isalpha(bad[i]) )	bad[i] = tolower(bad[i]);
		ma[bad[i]] = 1;
	}
	for ( int i = 0; inp[i] != '\0'; i++ )
		if ( ma[inp[i]] != 1 ){
			if ( inp[i] >= 'A' && inp[i] <= 'Z' && ma['+'] == 1 )	continue;
			if ( ma[tolower(inp[i])] == 1 )	continue;
			cout << inp[i];
			flag = true;
		}
	if ( !flag )	cout << endl;
	return 0;
}

