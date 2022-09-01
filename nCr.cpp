#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}
int nCr(int n,int r){
    int ans ;
    return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<nCr(n,r)<<endl;
    return 0;
}