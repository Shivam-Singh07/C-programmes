#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    string str="abcd";
    // cout<<str.length();
    // str.push_back('e');
    // cout<<endl<<str;
    // str.pop_back();
    // cout<<endl<<str;
    string str1="efgh";
    string str2="abc";
    str=str+str1;
    str+=" vaibhav";//add front behind
    str+='a';//not a num "123" is okh

    str2="123"+str2;
    str2="abcdef";// modify!!
    // reverse(str2.begin()+2,str2.end());
    reverse(str2.begin()+2,str2.begin()+5);
    cout<<str2;
    return 0;
}