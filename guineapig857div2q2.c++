#include<iostream>
using namespace std;
int maxm(int a,int b){
    if(a>b){
        return a;
    }
    else return b;
}
int main(){
    int n,a;
    cin>>n;
    
    
    
    while(n--){
        int ans=0;
        int d=0,c=0;
        cin>>a;
        int arr[a];
        for(int i=0;i<a;i++){
            cin>>arr[i];

        }
        for(int i=0;i<a;i++){
            if(arr[i]==2){
                d=d+c;
                c=0;
                if(d>0)
                // 1 1 1 2 1 1 1 2
                // ans=max(ans,(d+2)/2);
                ans=ans;
            }
            else{
                c++;
                if(d>0)
                ans=max(ans,c+(d+2)/2);
                else{
                    ans=max(ans,c);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}