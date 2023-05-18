#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,n2;
    cin>>n>>n2;
    vector<int> num1(n),num2(n2),num3(n+n2);
    for(int i=0;i<n;i++) cin>>num1[i];
    for(int i=0;i<n2;i++) cin>>num2[i];

    int x=0,y=0;
    int i=0;
    while(x<=n-1&&y<=n2-1){
        if(num1[x]<num2[y]){
            num3[i]=num1[x];
            i++;
            x++;
        }
        else{
            num3[i]=num2[y];
            i++;
            y++;
        }
    }
    
    if(i<n+n2){
        if(x>n-1)
        for(int x1=i;x1<n+n2;x1++){
            num3[x1]=num2[y];
            y++;
        }
        else{
            for(int x2=i;x2<n+n2;x2++){
                num3[x2]=num1[x];
                x++;
            }
        }
    }
    for(int i=0;i<n+n2;i++) cout<<num3[i]<<" ";
    
    return 0;
}