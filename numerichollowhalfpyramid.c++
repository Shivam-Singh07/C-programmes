#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows::";
    cin>>n;
    for(int i=0;i<n;i++){
        int a=1;
        for(int j=0;j<=i;j++){
            if(j==0||j==i||i==n-1){
                cout<<(a);
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