#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows;:";
    cin>>n;
    int d=2*(n)-2;
    int e=d;
    int nsp=1;
    int a;
    for(int i=0;i<n;i++){
        a=i+1;
        for(int j=0;j<d;j++){
            cout<<"*";
        }
        d--;
        for(int k=0;k<nsp;k++){
            if(k==nsp-1){
                cout<<a;
                
            }
            else{
                cout<<a<<"*";
                
            }
        
        }
        nsp+=1;
        for(int j=0;j<e;j++){
            cout<<"*";
        }
        e--;
        cout<<endl;

    }
    
    
    return 0;
}