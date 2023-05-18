#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    bool flag=false;
    int count=0;
    int count0=0;
    int count1=0;
    for(int i=0;i<n;i++){
        count++;
        if(arr[i]==0){
            count0++;
            
            
        }
        else if(arr[i]==1) count1++;


    }
    cout<<count0<<endl<<count1;

    return 0;
}