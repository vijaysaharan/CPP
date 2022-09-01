#include<bits/stdc++.h>
using namespace std;
// return n && !(n&(n-1));
/* Using log_base_2
    return ceil(log2(n))==floor(log2(n));
*/
bool isPower(int n){
    for(int i=0;i<=30;i++){
        if(n==pow(2,i)){
            return 1;
        }
    }
    return 0;
}
bool isPower2(int n){
    int cnt = 0;
    while(n>0){
        if((n&1)==1){
            cnt++;
        }
        n = n>>1;
    }
    if(cnt==1){
        return 1;
    }
    else
        return 0;
}
int main()
{
    int n;
    cin>>n;

    cout<<isPower2(n);
    return 0;
}