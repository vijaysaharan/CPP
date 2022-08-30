#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int r=1;
    int c=1;
    while(r<=n){
        int j=1;
        while(j<=r){
            cout<<c<<" ";
            j++;
            c++;
        }
        cout<<endl;
        r++;
    }
    return 0;
}