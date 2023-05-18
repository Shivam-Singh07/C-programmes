#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>p;
        arr[i]=p;

    }
    for(int j=0;j<n;j++){
        cout<<arr[j]<<endl;
    }
    cout<<&arr[0];
    cout<<endl<<&arr[1];
    cout<<endl<<&arr[6];//garbage value::!!
    return 0;
}