#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>m>>n;
    int arr[m][n];
    int arr2[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr2[i][j];
        }
    }
    int arr3[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr3[i][j]=arr[i][j]+arr2[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr3[i][j];
        }
        cout<<endl;
    }

    // int sum=0;
    // // int max=arr[0][0];
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         sum+=arr[i][j];
    //     }
    // }
    // cout<<sum;
    return 0;
}