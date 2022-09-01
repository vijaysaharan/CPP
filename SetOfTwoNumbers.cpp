#include<bits/stdc++.h>
using namespace std;
int Bit(int a){
    int cnt = 0;
    while(a!=0){
        int bit = a&1;
        if(bit==1){
            cnt++;
        }
        a = a>>1;
    }
    return cnt;
}
int SetBit(int a,int b){
    return Bit(a)+Bit(b);
}
int main()
{
    int a,b;
    cin>>a>>b;

    cout<<SetBit(a,b)<<endl;

    return 0;
}