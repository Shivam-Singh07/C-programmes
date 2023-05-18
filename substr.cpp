#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s="abcdef";
    int n=s.length();
    //s.substr(idx,len)
    // cout<<s.substr(4);
    // cout<<endl<<s.substr(1,3);
    // cout<<endl<<s.substr(2,2);

// second half print using substr
    cout<<s.substr(n/2,n/2);

    return 0;
}