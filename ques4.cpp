#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n=str.length();
    // for(int i=0;i<n;i++)
    reverse(str.begin()+n/2,str.end());
    cout<<str;
    
    return 0;
}