#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Q.1
        // * * * *
        // * * * *
        // * * * *
        // * * * *
    // Ans-
        // int row=1;
        // while(row<=4){
        //     int col=1;
        //     while(col<=4){
        //         cout<<"* ";
        //         col++;
        //     }    
        //     cout<<endl;
        //     row++;
        // }

    // Q.2
        // 1 1 1
        // 2 2 2
        // 3 3 3
    // Ans-
        // int i=1;
        // while(i<=3){
        //     int j=1;
        //     while(j<=3){
        //         cout<<i<<" ";
        //         j++;
        //     }
        //     i++;
        //     cout<<endl;
        // }

    // Q.3
        // 1 2 3 4
        // 1 2 3 4
        // 1 2 3 4 
        // 1 2 3 4
        // int i=1;
        // while(i<=4){
        //     int j=1;
        //     while(j<=4){
        //         cout<<j<<" ";
        //         j++;
        //     }
        //     cout<<endl;
        //     i++;
        // }

    // Q.4
        // 4 3 2 1
        // 4 3 2 1
        // 4 3 2 1
        // 4 3 2 1
    
        // int i=1;
        // while(i<=4){
        //     int j=4;
        //     while(j>=1){
        //         cout<<j<<" ";
        //         j--;
        //     }
        //     cout<<endl;
        //     i++;
        // }

    // Q.5
        // 1 2 3
        // 4 5 6
        // 7 8 9
    
        // int i=1;
        // int count=1;
        // while(i<=3){
        //     int j=1;
        //     while(j<=3){
        //         cout<<count<<" ";
        //         j++;
        //         count++;
        //     }
        //     cout<<endl;
        //     i++;
        // }
        
    // Reverse Of above Pattern
        // int i=1;
        // int count=3*3;
        //     while(i<=3){
        //         int j=1;
        //         while(j<=3){
        //             cout<<count<<" ";
        //             j++;
        //             count--;
        //         }
        //         cout<<endl;
        //         i++;
        //     }

    // Q.6
        // *
        // * *
        // * * *
        // * * * *

        // int i=1;
        // while(i<=4){
        //     int j=1;
        //     while(j<=i){
        //         cout<<"* ";
        //         j++;
        //     }
        //     cout<<endl;
        //     i++;
        // }

    // Q.7
        // 1
        // 2 2
        // 3 3 3
        // 4 4 4 4

        // int i=1;
        // while(i<=4){
        //     int j=1;
        //     while(j<=i){
        //         cout<<i<<" ";
        //         j++;
        //     }
        //     cout<<endl;
        //     i++;
        // }

    // Q.8
        // 1
        // 2 3
        // 4 5 6
        // 7 8 9 10

        // int i=1;
        // int num=1;
        // while(i<=4){
        //     int j=1;
        //     while(j<=i){
        //         cout<<num<<" ";
        //         j++;
        //         num++;
        //     }
        //     cout<<endl;
        //     i++;
        // }

    // Q.9
        // 1
        // 2 3
        // 3 4 5
        // 4 5 6 7

        // int i=1;
        // while(i<=4){
        //     int num=i;
        //     int j=1;
        //     while(j<=i){
        //         cout<<num<<" ";
        //         j++;
        //         num++;
        //     }
        //     cout<<endl;
        //     i++;
        // }
        // Second Approach
        // int i=1;
        // while(i<=4){
        //     int col=i;
        //     while(col<i*2){
        //         cout<<col<<" ";
        //         col++;
        //     }
        //     cout<<endl;
        //     i++;
        // }
    
    // Q.10
        // 1
        // 2 1
        // 3 2 1
        // 4 3 2 1

        // int i=1;
        // while(i<=4){
        //     int j=i;
        //     while(j>0){
        //         cout<<j<<" ";
        //         j--;
        //     }
        //     cout<<endl;
        //     i++;
        // }

    // Q.11
        // A A A
        // B B B
        // C C C

        // int i=1;
        // while(i<=3){
        //     int j=1;
        //     char c = i+64;
        //     while(j<=3){
        //         cout<<c<<" ";
        //         j++;
        //     }
        //     cout<<endl;
        //     i++;
        // }

    // Q.12
        // A B C
        // A B C
        // A B C

        // int i=1;
        // while(i<=3){
        //     int j=1;
        //     while(j<=3){
        //         char c = j+64;
        //         cout<<c<<" ";
        //         j++;
        //     }
        //     cout<<endl;
        //     i++;
        // }

    // Q.13
        // A B C
        // D E F
        // G H I

        // int i=1;
        // char c = 'A';
        // while(i<=3){
        //     int j=1;
           
        //     while(j<=3){
        //         cout<<c<<" ";
        //         j++;
        //         c++;
        //     }
        //     cout<<endl;
        //     i++;
        // }

    // Q.14
        // A B C
        // B C D
        // C D E

        // int i=1;
        // while(i<=3){
        //     char c='A' + i - 1;
        //     int j=1;
        //     while(j<=3){
        //         cout<<c<<" ";
        //         c++;
        //         j++;
        //     }
        //     cout<<endl;
        //     i++;
        // }

    // Q.15
        // A
        // B B
        // C C C

        // int i=1;
        // while(i<=3){
        //     char c='A'+ i - 1;
        //     int j=1;
        //     while(j<=i){
        //         cout<<c<<" ";
        //         j++;
        //     }
        //     cout<<endl;
        //     i++;
        // }

    // Q.16
        // A
        // B C 
        // C D E
        // D E F G

        // int i=1;
        // while(i<=4){
        //     char c='A'+i-1;
        //     int j=1;
        //     while(j<=i){
        //         cout<<c<<" ";
        //         j++;
        //         c++;
        //     }
        //     cout<<endl;
        //     i++;
        // }

    // Q.17
        // A
        // B C
        // D E F
        // G H I J

        // int i=1;
        // char c='A';
        // while(i<=4){
        //     int j=1;
        //     while(j<=i){
        //         cout<<c<<" ";
        //         c++;
        //         j++;
        //     }
        //     cout<<endl;
        //     i++;
        // }

    // Q.18
        // D
        // C D
        // B C D
        // A B C D

        // int i=1;
        // while(i<=4){
        //     char c = 'A' + 4 - i;
        //     int j=1;
        //     while(j<=i){
        //         cout<<c<<" ";
        //         j++;
        //         c++;
        //     }
        //     cout<<endl;
        //     i++;
        // }

    // Q.19
        //        *
        //      * *
        //    * * *
        //  * * * *

        // int i=1;
        // while(i<=4){
        //     int j=1;
        //     while(j<=4-i){
        //         cout<<"  ";
        //         j++;
        //     }
        //     int k=1;
        //     while(k<=i){
        //         cout<<"* ";
        //         k++;
        //     }
        //     cout<<endl;
        //     i++;
        // }

    // Q.20
        // * * * *
        // * * *
        // * *
        // *

        // int i=1;
        // while(i<=4){
        //     int j=4-i+1;
        //     while(j>0){
        //         cout<<"* ";
        //         j--;
        //     }
        //     cout<<endl;
        //     i++;
        // }

    // Q.21
        // * * * *
        //   * * *
        //     * *
        //       *

        // int i=1;
        // while(i<=4){
        //     int j=i-1;
        //     while(j>0){
        //         cout<<"  ";
        //         j--;
        //     }
        //     int k=4-i+1;
        //     while(k>0){
        //         cout<<"* ";
        //         k--;
        //     }
        //     cout<<endl;
        //     i++;
        // }

    // Q.22
        // 1 1 1 1
        //   2 2 2
        //     3 3
        //       4

        // int i=1;
        // while(i<=4){
        //     int j=i-1;
        //     while(j>0){
        //         cout<<"  ";
        //         j--;
        //     }
        //     int k=4-i+1;
        //     while(k>0){
        //         cout<<i<<" ";
        //         k--;
        //     }
        //     cout<<endl;
        //     i++;
        // }

    // Q.23
        //        1
        //      2 2
        //    3 3 3
        //  4 4 4 4

        // int i=1;
        // while(i<=4){
        //     int j=4-i;
        //     while(j>0){
        //         cout<<"  ";
        //         j--;
        //     }
        //     int k=i;
        //     while(k>0){
        //         cout<<i<<" ";
        //         k--;
        //     }
        //     cout<<endl;
        //     i++;
        // }

    // Q.24
        //        1
        //      2 3
        //    4 5 6
        //  7 8 9 10

        // int i=1;
        // int num=1;
        // while(i<=4){
        //     int j=4-i;
        //     while(j>0){
        //         cout<<"  ";
        //         j--;
        //     }
        //     int k=i;
        //     while(k>0){
        //         cout<<num<<" ";
        //         k--;
        //         num++;
        //     }
        //     cout<<endl;
        //     i++;
        // }

    // Q.25
        //        1
        //      1 2 1
        //    1 2 3 2 1
        //  1 2 3 4 3 2 1

        // int i=1;
        // while(i<=4){
        //     int j=4-i;
        //     while(j>0){
        //         cout<<"  ";
        //         j--;
        //     }
        //     int num=1;
        //     int k=i;
        //     while(k>0){
        //         cout<<num<<" ";
        //         k--;
        //         num++;
        //     }
        //     int x=i-1;
        //     while(x>0){
        //         cout<<x<<" ";
        //         x--;
        //     }
        //     cout<<endl;
        //     i++;
        // }

    // Q.26
        // 1 2 3 4 5 5 4 3 2 1
        // 1 2 3 4 * * 4 3 2 1
        // 1 2 3 * * * * 3 2 1
        // 1 2 * * * * * * 2 1
        // 1 * * * * * * * * 1

        // int i=1;
        // while(i<=5){
        //     int num=1;
        //     int j = 5-i;
        //     while(j>=0){
        //         cout<<num<<" ";
        //         num++;
        //         j--;
        //     }
        //     int k=(i-1)*2;
        //     while(k>0){
        //         cout<<"* ";
        //         k--;
        //     }
        //     int y=5-i+1;
        //     while(y>0){
        //         cout<<y<<" ";
        //         y--;
        //     }
        //     cout<<endl;
        //     i++;
        // }

    // Decimal To Binary
    // int n;
    // cin>>n;
    // int ans=0;
    // int i=0;
    // while(n!=0){
    //     int bit = n&1;
        
    //     ans= ans*pow(10,i) + bit;
    //     i++; 
    //     n = n>>1;
    // }
    // cout<<ans<<endl;


    // Binary To Decimal
    // int n;
    // cin>>n;
    // int ans=0;
    // int i=0;
    // while(n!=0){
    //     int bit = n%10;
        
    //     ans= bit*pow(2,i) + ans;
    //     i++; 
    //     n = n/10;
    // }
    // cout<<ans<<endl;
    return 0;
}