#include <iostream>
#include <map>
using namespace std;

int main()
{
	int M, N, S;
	cin >> M >> N >> S;
	map <string,int> ma;
	string ss[M + 1];
	string re[M + 1];
	ss[0] = " ";
	for(int i = 1; i <= M; i++)
		cin >> ss[i];
	if(S > M){
		cout << "Keep going...";
		return 0;
	}
	int pos = S;
	int num = 0;
	while( pos <= M ){
		if(!ma.count(ss[pos])){
			ma[ss[pos]] = 0;
			re[num++] = ss[pos];
			ma[ss[pos]]++;
			pos += N;
		}
		else{
			pos += 1;
		}
	}
	//cout << num << endl;
	for(int i = 0; i < num ; i++)
		cout << re[i] << endl;
	return 0;
}

