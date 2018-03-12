#include "iostream"
#include "string"
using namespace std;

int main()
{
    string A,Q;
    int B;
    int R = 0;
    cin>>A>>B;
    int i = 1;
    if(B <= A[0] % '0'){
        Q.push_back((A[0] % '0') / B + '0');
        R = (A[0] % '0') % B;
    }
    else
        R = A[0] % '0';
    int flag = 1;
    while('\0' != A[i]){
        int a = A[i] % '0';
        R = R * 10 + a;
        Q.push_back(R / B + '0');
        R = R % B;
        i++;
    }
    if(1 == A.size() && B > A[0] % '0')
        cout<<0<<" "<<0;
    else
        cout<<Q<<" "<<R;
    return 0;
}
