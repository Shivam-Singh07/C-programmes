#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n=str.length();
    int count=0;
    for(int i=0;i<n;i++){
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u') count++;
    }
    cout<<count;
    return 0;
}