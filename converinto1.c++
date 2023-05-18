#include<iostream>
using namespace std;
int main(){
    int n[1000];
    int n1;
    cin>>n1;
    for(int i=0;i<n1;i++){
        cin>>n[i];


    }
    for(int j=0;j<n1;j++){
        n[j]=1;
    }
    for(int k=0;k<n1;k++){
        cout<<n[k]<<endl;
    }


    return 0;
}