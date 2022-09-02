#include<bits/stdc++.h>
using namespace std;
long long int tempInt(int n){
    int s=0;
    unsigned int e=n;
    long long int mid = s+(e-s)/2;
    long long int ans = -1;
    // cout<<s<<" "<<e<<" "<<mid<<" "<<ans<<endl;
    while(s<=e){
        long long int sqr = mid*mid;
        if(sqr == n){
            return mid;
        }
        else if(sqr<n){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        // cout<<s<<" "<<e<<" "<<mid<<" "<<ans<<endl;
        mid = s+(e-s)/2;
    }
    return ans;
}
double morePrecision(int n,int p,int temp){
    double ans = temp;
    double factor = 1;
    for(int i=0;i<p;i++){
        factor /= 10;
        for(double j=ans; j*j<n; j += factor){
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    // cout<<"In function "<<endl;
    int tempval = tempInt(n);
    // cout<<"Out of tempInt function "<<endl;
    // cout<<tempval<<endl;
    // cout<<"In morePrecision function "<<endl;
    cout<<"Squre root till 2nd place after decimal "<<morePrecision(n,2,tempval)<<endl;
    return 0;
}