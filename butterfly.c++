#include<iostream>
using namespace std;
int main(){
    int n;
    
    cout<<"enter the no of rows::";
    cin>>n;
    int nsp=2*n-2;
    int nsp1=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int k=0;k<nsp;k++){
            cout<<" ";
        }
        nsp-=2;
        for(int j=0;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                cout<<"*";
            }
            for(int k=0;k<nsp1;k++){
                cout<<" ";
            }
            nsp1+=2;
            for(int j=0;j<n-i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
 
        return 0;
    }
    
            
    
