#include <iostream>
using namespace std;

//bool Cmp()

int main()
{
//����ο����ϵ������ʽ���ܺõķ���
//����Ŀ�涨���һ������ĩβ��������ո��ʱ��
//���Զ���һ��flag���õ�һ��Ԫ��ԭ��������˺��ÿһ��Ԫ�����ǰ���һ���ո� 
//һ��ʼ���ʵ����̫���ڸ��ӣ������˱���ķ�Χ��С��������Ҳ������9999������ֱ���������������±�����ʾ������ 
	int N;
	cin >> N;
	int count = 0;
	int re[50] = {0};
	for(int i = 0; i < N; i++){
		int n;
		cin >> n;
		int sum = 0;
		while(n){
			sum += n % 10;
			n /= 10;
		}
		++re[sum];
	}
	for(int i = 0; i < 50; i++)
		if(re[i])
			++count;
	cout << count << endl;
	int flag = 1;
	for(int i = 0; i < 50; i++){
		if(re[i]){
			if(flag){
				cout << i;
				flag = 0;
			}
			else
				cout << " " << i;	
		}
	}
	return 0;
}
