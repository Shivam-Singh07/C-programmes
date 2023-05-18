#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows::";
    cin>>n;
    int nsp=n-1;
    for(int i=0;i<n;i++){
        for(int k=0;k<nsp;k++){
            cout<<" ";

        }
        nsp--;
        
        if(i==n-1){
            for(int j=0;j<n;j++){
                cout<<"* " ;
            }
            
        }
        else{
        
        for(int j=0;j<2*(i)+1;j++){
            if(j==0||j==2*i||i==0){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        }

        cout<<endl;
    }
    return 0;
}