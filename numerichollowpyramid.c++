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
        int d=1;
        if(i==n-1){
                for(int j=0;j<n;j++){
                    cout<<j+1<<" ";
                }
            }
            
        else{    
        for(int j=0;j<2*(i)+1;j++){
            if(j==0||j==2*(i)){
                cout<<d;
                d=i+1;
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