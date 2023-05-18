#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows:";
    cin>>n;
    int a;
    for(int i=0;i<n;i++){
        a=i+1;
        for(int j=0;j<=i;j++){
            if(j==i){
                cout<<a;
            }
            else{
                cout<<a<<"*";
            }
            

        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(j==n-i-1){
                cout<<n-i;
            }
            else{
                cout<<n-i<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}