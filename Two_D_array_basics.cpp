#include<bits/stdc++.h>
using namespace std;
int searchElement(int arr[][3],int row,int col,int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
void sumRowWise(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
        cout<<sum<<endl;
    }
}
void sumColWise(int arr[][3],int row,int col){
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum += arr[j][i];
        }
        cout<<sum<<endl;
    }
}
int largestSumInRow(int arr[][3],int row,int col){
    int largestSum=0;
    int rowIndex=-1;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
        if(largestSum<sum){
            largestSum=sum;
            rowIndex=i;
        }
    }
    cout<<largestSum<<endl;
    return rowIndex;
}
int main()
{
    int arr[3][3];
    int row=3;
    int col=3;

    /*
    taking input from row wise
    */
   cout<<"Enter the values of the element of the matrix "<<endl;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    // com]lumn wise input

    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cin>>arr[j][i];
    //     }
    // }

    // printing the matrix
    cout<<"Printing Matrix....."<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl;

    // int target;
    // cout<<"Enter the target element value "<<endl;
    // cin>>target;

    // if(searchElement(arr,row,col,target)){
    //     cout<<"Element Found"<<endl;
    // }
    // else{
    //     cout<<"Element Not Found"<<endl;
    // }

    // cout<<"Print the row wise sum "<<endl;
    // sumRowWise(arr,row,col);

    // cout<<"Printing Column wise sum "<<endl;
    // sumColWise(arr,row,col);

    // cout<<"Largest sum and its row "<<endl;
    // int index = largestSumInRow(arr,row,col);
    // cout<<index<<endl;

    cout<<"Checking swap function "<<endl;
    for(int i=0; i<3; i++){
          for(int j=i; j<3; j++){
             swap(arr[i][j],arr[j][i]);
          }
    }
    cout<<"After Swaping "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}