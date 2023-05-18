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
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>arr2[i][j];
    //     }
    // }
    int arr3[m][n];
    for(int i=0;i<m;i++){
        for(int j=i+1;j<n;j++){
            if(i<j){
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr3[i][j]=arr[i][j];
        }
        
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}