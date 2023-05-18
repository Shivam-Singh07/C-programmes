#include<iostream>
using namespace std;
int main(){
    int x,n,a,pos=0,neg=0;
    cin>>x;
    while(x--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a>0){
                pos++;
            }
            else{
                neg++;
            }
            
        }
        int a=0;
        for(int j=0;j<pos;j++){
            a++;
            cout<<a<<" ";
        }
        for(int k=0;k<neg;k++){
            a--;
            cout<<a<<" ";
        }
        // cout<<pos<<endl<<neg;
        cout<<endl;
        int b=0;
        for(int z=0;pos>0;z++){
            if(pos>0){
                b++;
                cout<<b<<" ";
                pos--;
            }
            if(neg>0){
                b--;
                cout<<b<<" ";
                neg--;
            }

        }
    }
        
    return 0;
}