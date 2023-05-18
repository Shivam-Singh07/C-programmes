#include<iostream>
#include<vector>
using namespace std;
int main(){
    // char str[]={'a','b','c','d','e'};
    // for(int i=0;i<5;i++) cout<<str[i]<<" ";
    char str1[5]="abcd";
    // for(int i=0;i<5;i++) cout<<str1[i]<<" ";
    int i=0;
    cout<<str1[4]<<endl;
    while(str1[i]!='\0'){
        cout<<str1[i]<<" ";
        i++;

    }

    return 0;
}