#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    sort(str.begin(),str.end());
    cout<<str;
    // vector<int> v(5);
    // cout<<v.siz

    return 0;
}