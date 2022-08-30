#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    int c = 1;
    while(i<n){
        int j=0;
        while(j<n){
            cout<<c<<" ";
            c++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}