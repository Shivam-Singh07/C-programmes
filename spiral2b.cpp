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
    int k=1;
    
    while(count<n*n){
        if(count<n*n){
        for(int i=minc;i<=maxc;i++){
            arr[minr][i]=k;
            k++;
            count++;
        }
        }
        minr++;
        if(count<n*n){
            for(int j=minr;j<=maxr;j++){
                arr[j][maxc]=k;
                k++;
                count++;
            }
            
        }
        maxc--;
        if(count<n*n){
            for(int i=maxc;i>=minc;i--){
                arr[maxr][i]=k;
                k++;
                count++;
            }
        }
        maxr--;
        if(count<n*n){
            for(int j=maxr;j>=minr;j--){
                arr[j][minc]=k;
                k++;
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