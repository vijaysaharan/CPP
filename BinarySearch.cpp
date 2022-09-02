#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}
int main()
{
    int arr[5]={2,5,8,9,11};
    int n=5;
    int key;
    cin>>key;
    cout<<binarySearch(arr,n,key);
    return 0;
}