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
    
    int arr3[m][n];
    
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            arr3[j][i]=arr[i][j];
        }
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}