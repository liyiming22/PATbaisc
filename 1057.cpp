#include <iostream>
using namespace std;

long long a = 0;
long long b = 0;

//为啥递归做提交只有19分啊,扣的那一分扣在哪里呢？ 
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
	//string函数遇到空格会停止 
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
	//fclose(stdin);//关闭文件   
	//fclose(stdout);//关闭文件 
	return 0;
}

