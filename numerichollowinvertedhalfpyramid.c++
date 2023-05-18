#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows::";
    cin>>n;
    int a;
    for(int i=0;i<n;i++){
        a=i+1;
        for(int j=0;j<n-i;j++){
            
            if(i==0||j==0||j==n-i-1){
                cout<<a;
                a++;
            }
            else{
                cout<<" ";
                a++;
            }
        }
        cout<<endl;
    }
    return 0;
}