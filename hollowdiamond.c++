#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows::";
    cin>>n;
    int nsp=n-1;
    int nsp1=0;
    int an=n;
    for(int i=0;i<n;i++){
        for(int k=0;k<nsp;k++){
            cout<<" ";
        }
        nsp--;
        for(int j=0;j<2*(i)+1;j++){
            if(j==0||j==2*(i)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            // cout<<"* ";
        }
        cout<<endl;
        
    }
    // cout<<endl;
    for(int i=0;i<n;i++){
        for(int k=0;k<nsp1;k++){
            cout<<" ";

        }
        nsp1++;
        for(int j=0;j<2*(an)-1;j++){
            if(j==0||j==2*(an-1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            // cout<<"* ";
        }
        an--;
        cout<<endl;
    }

    return 0;
}