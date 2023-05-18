#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n=str.length();
    int count=0;
    for(int i=0,j=n-1;i<j;i++,j--){
        if(str[i]!=str[j]) {
            count=1;
            break;
        }
    }
    if(count==0){ cout<<"palindrome";}
    else cout<<"not palindrome";
    return 0;
}