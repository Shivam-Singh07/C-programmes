#include<iostream>
#include<vector>
using namespace std;
int main(){
    // string s="abaaa";
    // string s="physicswallah";
    string s;
    getline(cin,s);
    int n=s.length();
    int arr[26]={0};
    // cout<<arr[23];
    for(int i=0;i<n;i++){
        arr[s[i]-97]++;
    }
    int max=arr[0];
    for(int i=0;i<26;i++){
        if(max<arr[i]) max=arr[i];
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]==max){
            cout<<char(i+97)<<max<<endl;
        }
    }
    return 0;
}