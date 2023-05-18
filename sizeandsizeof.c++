#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[]={2,3,4,1,2,9,10,11,100,17,19,18,16};
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<n;
    return 0;
}