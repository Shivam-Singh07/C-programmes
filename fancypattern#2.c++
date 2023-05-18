#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter row";
    cin>>n;
    int a=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==i){
                cout<<a;
                a++;
            }
            else{
                cout<<a<<"*";
                a++;
            }
        }
        cout<<endl;
    }
    
    for(int i=0;i<n;i++){
        int b=2*(n-i)-1;
        for(int j=0;j<n-i;j++){
            if(j==n-i-1){
                cout<<b;
                b++;
            }
            else{
                cout<<b<<"*";
                b++;
            }
        }
        cout<<endl;
    }
    return 0;
}