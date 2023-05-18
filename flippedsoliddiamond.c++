#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows::";
    cin>>n;
    int nsp=1;
    int nsp1=2*n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int k=0;k<nsp;k++){
            cout<<" ";
        }
        nsp=nsp+2;
        for(int l=0;l<n-i;l++){
            cout<<"*";
        }
        cout<<endl;

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int k=0;k<nsp1;k++){
            cout<<" ";
        }
        nsp1-=2;
        for(int l=0;l<=i;l++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}