#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    // half pyramid
    // while(i<n){
    //     int j=0;
    //     while(j<=i){
    //         cout<<"*"<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // inverted half pyramid

    // while(i<n){
    //     int j=n;
    //     while(j>i){
    //         cout<<"*"<<" ";
    //         j--;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Hollow half inverted pyramid

    // while(i<n){
    //     int j=n-1;
    //     while(j>=i){
    //         if(j==n-1 || j==i || i==0 || i==n-1){
    //             cout<<"*"<<" ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //         j--;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // full pyramid

    while(i<=n){
        int j=0;
        while(j<n-1+i){
            if(j<n-i){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}