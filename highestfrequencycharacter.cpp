#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s="physicswallah";
    // string s="abaaa";
    int n=s.length();
    int maxcount=0;
    char letter;
    for(int i=0;i<n;i++){
        char ch=s[i];
        int count=1;
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]) count++;
        }
        if(maxcount<count) {
            maxcount=count;
            letter=ch;
        }
    }
    for(int i=0;i<n;i++){
        char ch=s[i];
        int count=1;
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]) count++;
        }
        if(count==maxcount) {
            cout<<ch<<" "<<maxcount<<endl;
        }
    }
    // cout<<letter<<" "<<maxcount;

    return 0;
}