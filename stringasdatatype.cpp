#include<iostream>
#include<vector>
using namespace std;
int main(){
    // string str="vaibhav yadav";
    // cout<<str;
    string str1;
    // cin>>str1;//only if the given string has no spaces; 


    getline(cin,str1);

    cout<<str1;
    cout<<endl<<str1[3];
    return 0;
}