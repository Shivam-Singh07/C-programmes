#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int x=stoi(s);
    long long y=stoll(s);
    cout<<x+10;

    string str=to_string(x);
    cout<<endl<<str;



    return 0;
}