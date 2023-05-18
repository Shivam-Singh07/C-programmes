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
    // cin>>key;
    int maxm=INT16_MIN;
    // cout<<maxm;
    // cout<<endl;
    int count=0;
    for(int i=0;i<n;i++){
        if(maxm<arr[i]){
            maxm=arr[i];
        }
        
         }
    cout<<maxm;
    return 0;
}