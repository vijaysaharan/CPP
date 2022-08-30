#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int r=1;
    while(r<=n){
        int j=1;
        int c=r;
        while(j<=r){
            cout<<c<<" ";
            c--;
            j++;
        }
        cout<<endl;
        r++;
    }
    return 0;
}