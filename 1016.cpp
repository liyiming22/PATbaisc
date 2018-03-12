#include "iostream"
#include "cmath"
using namespace std;

long long OutPut(int a,int d)
{
    int count = 0;
    int p = 0;
    while(a){
        if(d == a % 10){
            p += d * pow(10,count);
            ++count;
        }
        a /= 10;
    }
    return p;
}

int main()
{
    int A,B;
    int Da,Db;
    int Pa,Pb;
    cin>>A>>Da>>B>>Db;
    Pa = OutPut(A,Da);
    Pb = OutPut(B,Db);
    cout<<Pa + Pb<<endl;
    return 0;
}
