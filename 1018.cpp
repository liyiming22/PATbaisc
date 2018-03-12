#include "iostream"
using namespace std;

struct Info{
    int c;
    int j;
    int b;
};
//结构体不能初始化！
int main()
{
    int num;
    cin>>num;
    int win = 0;
    int fail = 0;
    int draw = 0;
    struct Info * a;
    a = (struct Info *)malloc(2 * sizeof(struct Info));
    a[0].c = 0;
    a[0].b = 0;
    a[0].j = 0;
    a[1].c = 0;
    a[1].b = 0;
    a[1].j = 0;
    for(int i = 0; i < num; i++){
        char s1,s2;
        cin>>s1>>s2;
        if(s1 == s2)
            draw++;
        if(s1 == 'C' && s2 == 'J'){
            ++a[0].c;
            win++;
        }
        if(s1 == 'C' && s2 == 'B'){
            fail++;
            ++a[1].b;
        }
        if(s1 == 'J' && s2 == 'C'){
            fail++;
            ++a[1].c;
        }
        if(s1 == 'J' && s2 == 'B'){
            win++;
            ++a[0].j;
        }
        if(s1 == 'B' && s2 == 'C'){
            win++;
            ++a[0].b;
        }
        if(s1 == 'B' && s2 == 'J'){
            fail++;
            ++a[1].j;
        }
    }
    cout<<win<<" "<<draw<<" "<<fail<<endl;
    cout<<fail<<" "<<draw<<" "<<win<<endl;
    char a1,a2;
    int sum1,sum2;
    sum1 = a[0].c >= a[0].j? a[0].c : a[0].j;
    a1 = a[0].c >= a[0].j? 'C' : 'J';
    a1 = a[0].b >= sum1? 'B' : a1;

    sum2 = a[1].c >= a[1].j? a[1].c : a[1].j;
    a2 = a[1].c >= a[1].j? 'C' : 'J';
    a2 = a[1].b >= sum2? 'B' : a2;
    cout<<a1<<" "<<a2;
    return 0;
}
