#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    // Solid Rectangle
    // int i=0;
    // while(i<n1){
    //     int j=0;
    //     while(j<n2){
    //         cout<<"*"<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Hollow Rectangle

    int i=0;
    while(i<n1){
        int j=0;
        while(j<n2){
            if(j==0 || j==n2-1 || i==0 || i==n1-1){
                cout<<"*"<<" ";
            }
            else{
                cout<<"  ";
            }
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}