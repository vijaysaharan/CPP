#include<bits/stdc++.h>
using namespace std;
int LinearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[10] = {-4,5,-6,7,8,2,23,-9,-3,10};
    int n = 10;
    int key;
    cin>>key;
    cout<<"Key is on index "<<LinearSearch(arr,n,key);

    return 0;
}