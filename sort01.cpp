#include<iostream>
#include<vector>
using namespace std;
void sortt(vector<int>& v){
    int count0=0,count1=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0) count0++;
        if(v[i]==1) count1++;
    }
    for(int i=0;i<count0;i++) v[i]=0;
    for(int i=count0;i<v.size();i++) v[i]=1;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<v.size();i++) cin>>v[i];
    // for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    // sort(v.begin(),v.end());
    // v(v.size(),0); //doubt;


    sortt(v);
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    return 0;
}