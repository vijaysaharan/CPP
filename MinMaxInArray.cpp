#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int minArray(int arr[],int n){
    int min = arr[0];
    for(int i=1;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}
int maxArray(int arr[],int n){
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[5] = {5,3,9,12,6};
    int n=5;
    printArray(arr,5);
    cout<<minArray(arr,5)<<endl;
    cout<<maxArray(arr,5)<<endl;
    return 0;
}