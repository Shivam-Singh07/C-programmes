#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n=str.length();
    
    int count=0,count1=0;
    int i=0;
    while(str[i]!='\0'){
        if(n==1) {
            count=0;
            break;
        }
        if(n==2&&str[0]!=str[1]){
            count=1;
            break;
        }
        if(i==0){
            if(str[i]!=str[i+1]) {
                count++;
                i++;
                }
            else {
                i++;
                continue;
            }
        }
        else if(i>0&&i<n-1){
            if(str[i]!=str[i+1]&&str[i]!=str[i-1]) {
                count++;
                i++;
            }
            else {
                i++;
                continue;
            }
        }
        else{
            if(str[i]!=str[i-1]) {
                count++;
                i++;
            }
            else {
                i++;
                continue;
            }
        }
    }
    cout<<count<<endl;
    // cout<<count1;
    return 0;
}