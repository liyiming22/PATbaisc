/*
�״�㣺
1.�ϵ����������еĴ�д��ĸ�޷����
2.ֻ˵�˵ڶ��б�֤�ǿգ�û˵��һ�зǿգ����Ե�һ��Ҳ�п����ǿյġ�����
����Ϊɶ���ǲ������֣�
����3�ֿ��������أ�
֪����= =
��������̰��������
������ô����Ŀ�ˣ�һ�㳤����û�а�
��򵥵���һ����Ŀ�����˰��죬������
һ��ʼд�Ĳ��������ѻ���ȫ��ת��ΪСд�������жϵ�mapΪ0ʱ��ֻ����ĸΪ��д�����ϵ�������ʱ�����
����һ�ֿ��ܾ���ͬһ����ĸ���ϵ�����Ȼû��������map��ͬ��Ϊ0����Ϊȫ��ת��ΪСд��= =��
��ʵ�����Ŀֱ�����ߴ��������õġ���
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

