#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter the no of rows and column";
    cin>>n1;
    for(int i=0;i<n1;i++){
        for(int k=0;k<i;k++){
            cout<<" ";
        }
        for(int j=0;j<n1-i;j++){
            cout<<("* ");
        }
        cout<<endl;
    }
    return 0;
}