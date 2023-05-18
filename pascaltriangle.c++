#include<iostream>
using namespace std;
int main(){
    int n;
    int d;
    cout<<"enter the no of rows::";
    cin>>n;
    int nsp=n-1;
    for(int i=0;i<n;i++){
        d=1;
        for(int k=0;k<nsp;k++){
            cout<<" ";
        }
        nsp--;

        for(int j=0;j<=i;j++){
            
            cout<<d<<" ";
            d=d*(i-j)/(j+1);
        }
        cout<<endl;
    }
    return 0;
}