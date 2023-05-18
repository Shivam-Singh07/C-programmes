#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    int arr[n][n];
    int maxr=n-1;
    int minr=0;
    int minc=0;
    int maxc=n-1;
    
    while(count<n*n){
        if(count<n*n){
        for(int i=minc;i<=maxc;i++){
            cin>>arr[minr][i];
            count++;
        }
        }
        minr++;
        if(count<n*n){
            for(int j=minr;j<=maxr;j++){
                cin>>arr[j][maxc];
                count++;
            }
            
        }
        maxc--;
        if(count<n*n){
            for(int i=maxc;i>=minc;i--){
                cin>>arr[maxr][i];
                count++;
            }
        }
        maxr--;
        if(count<n*n){
            for(int j=maxr;j>=minr;j--){
                cin>>arr[j][minc];
                count++;
            }
        }
        minc++;

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}