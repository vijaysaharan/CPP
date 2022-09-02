#include<bits/stdc++.h>
using namespace std;
int getPivot(int arr[],int n){
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid+1;
        }
        else{
            e=mid;
            
        }
        mid = s+(e-s)/2;
    }
    return s;
}
int main()
{
    int arr[10] = {5,6,7,8,9,10,1,2,3,4};
    int n=10;
    cout<<getPivot(arr,n);
    return 0;
}