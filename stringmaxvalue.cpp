#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    vector<string> v;
    string s;
    for(int i=0;i<6;i++){
        cin>>s;
        v.push_back(s);
    }
    // int n;
    // cin>>n;
    // int i=0;
    // vector<string> v;
    // while(i<n){
    // string s;
    // getline(cin,s);
    // v.push_back(s);
    // i++;
    // }
    int max=INT_MIN;
    int count=0;
    for(int i=0;i<v.size();i++){
        int x=stoi(v[i]);
        if(max<x){
            max=x;
            count=i;
        }
    }
    cout<<max<<" "<<count;

    

    return 0;
}