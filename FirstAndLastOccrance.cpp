#include<bits/stdc++.h>
using namespace std;
int firstOcc(int arr[],int n,int k){
    int ans=-1;
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k){
            ans = mid;
            e=mid-1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[],int n,int k){
    int ans=-1;
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k){
            ans = mid;
            s=mid+1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
pair<int,int> result(int arr[],int n,int key){
    pair<int,int> res;
    res.first = firstOcc(arr,n,key);
    res.second = lastOcc(arr,n,key);
    cout<<res.first<<" "<<res.second<<endl;
    return res;
}
int main()
{
    int arr[8]={0,0,1,1,2,2,2,2};
    int n=8;
    int key;
    cin>>key;
    result(arr,n,key);
    return 0;
}