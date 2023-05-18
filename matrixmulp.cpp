#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n,m1,n1;
    cin>>m>>n;
    cin>>m1>>n1;
    int arr[m][n];
    int brr[m1][n1];
    // if(n==m1) cout<<"multiplication is possible:: ";
    // else cout<<"multiplication not possible::";
    int crr[m][n1];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            cin>>brr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n1;j++){
            crr[i][j]=0;
            for(int k=0;k<n;k++){
                crr[i][j]+=arr[i][k]*brr[k][j];

            }
            cout<<crr[i][j]<<" ";
            
        }
    }
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n1;j++){
    //         cout<<crr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    return 0;
}