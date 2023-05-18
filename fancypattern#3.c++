#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows::";
    cin>>n;
    int d=2*n-3;
    for(int i=0;i<n;i++){
        int a=1;
        for(int j=0;j<2*(i)+1;j++){
            if(j==0||j==2*(i)){
                cout<<"*";

            }
            else if(j<i){
                cout<<a;
                a++;
            }
            else{
                cout<<a;
                a--;
            }
            
        
        }
        cout<<endl;
    
    
    }
    for(int i=0;i<n-1;i++){
        int a=1;
        for(int j=0;j<d;j++){
            if(j==0||j==d-1){
                cout<<"*";
            }
            else if(j<n-2-i){
                cout<<a;
                a++;
            }
            else{
                // a--;
                cout<<a;
                a--;
            }
            // else {
            //     cout<<" ";
            // }

        }
        d-=2;
        cout<<endl;
    }
    
    
    return 0;
}