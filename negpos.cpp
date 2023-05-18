#include<iostream>
#include<vector>
using namespace std;
void negpos(vector<int>& v){
    int i=0,j=v.size()-1;
    while(i<j){
        if(v[i]>0&&v[j]<0){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
        if(v[i]<0) i++;
        if(v[j]>0) j--;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<v.size();i++) cin>>v[i];
    negpos(v);
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    return 0;
}