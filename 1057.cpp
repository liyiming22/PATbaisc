#include <iostream>
using namespace std;

long long a = 0;
long long b = 0;

//Ϊɶ�ݹ����ύֻ��19�ְ�,�۵���һ�ֿ��������أ� 
void solve(long long sum)
{
	if(0 == sum / 2){
		if(sum % 2 == 0)
			++a;
		else
			++b;
		return;
	}
	else{
		solve(sum / 2);
		if(sum % 2 == 0)
			++a;
		else
			++b;
	}
}

int main()
{
	//string str;
	//cin >> str;
	long long sum = 0;
	//string���������ո��ֹͣ 
	char ch;
	freopen("F://test.txt","r",stdin);
//	freopen("F://output.txt","w",stdout);
	while(scanf("%c",&ch),ch != '\n')
		if(isalpha(ch)){
			ch = tolower(ch);
			sum += (ch - 'a' + 1);
		}
	//cout << sum << endl;
	//solve(sum);
	while(sum){
		if(0 == sum % 2)	++a;
		else	++b;
		sum /= 2;
	}
	cout << a << " " << b << endl;
	//fclose(stdin);//�ر��ļ�   
	//fclose(stdout);//�ر��ļ� 
	return 0;
}

