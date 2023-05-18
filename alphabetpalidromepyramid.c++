#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows::";
    cin>>n;
    // int b=0;
    
    for(int i=0;i<n;i++){
        int a=0;
        for(int j=0;j<=i;j++){
            cout<<char(a+65);
            a++;
        }
        int b=i-1;
        for(int k=0;k<i;k++){
            // cout<<char(b+65);
            cout<<char(b+'A');//WOWWWWW!!!!!!
            b--;
        }
        cout<<endl;
    }
    return 0;
}