#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int flag = 1;
	int weight[18] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char M[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
	for(int i = 0; i < N; i++){
		int flag1 = 0;
		string id;
		cin >> id;
		int z = 0;
		for(int j = 0; j < 17; j++){
			if('0' <= id[j] && '9' >= id[j])
				z = z + weight[j] * (id[j] % '0');
			else{
				flag1 = 1;
				break;
			}
		}
		z %= 11;
		if(id[17] != M[z] || flag1){
			cout << id << endl;
			flag = 0;
		}
	}
	if(flag)
		cout << "All passed" << endl;
	return 0;
}

