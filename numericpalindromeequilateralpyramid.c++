#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows::";
    cin>>n;
    int nsp=n-1;
    
    for(int i=0;i<n;i++){
        int a=1;
        for(int k=0;k<nsp;k++){
            cout<<" ";
        }
        nsp--;
        for(int j=0;j<=i;j++){
            cout<<a;
            
            if(j==i){
                a--;
                
                while(a>=1){
                    
                    cout<<a;
                    a--;

                }
                

            }
            a++;
            
        }
        cout<<endl;
        
    }
    return 0;
}