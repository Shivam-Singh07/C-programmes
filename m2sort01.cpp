#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>& v){
    int i=0,j=v.size()-1;
    while(i<j){//carefull = will give wrong answer!!
        
        if(v[i]==1&&v[j]==0){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
        if(v[j]==1) j--;
        if(v[i]==0) i++;

    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort01(v);
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
    return 0;
}