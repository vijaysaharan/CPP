#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j<<" ";
            j++;
        }
        int star = i-1;
        while(star){
            cout<<"* ";
            star--;
        }
        int starp = 1;
        while(starp<=i-1){
            cout<<"* ";
            starp++;
        }
        int k=n-i+1;
        while(k){
            cout<<k<<" ";
            k--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}