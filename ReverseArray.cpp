#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int n = 6;
    printArray(arr,n);
    reverseArray(arr,n);
    printArray(arr,n);
    return 0;
}