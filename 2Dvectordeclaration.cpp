#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> v(5,2);
    // for(int i=0;i<5;i++) cout<<v[i]<<endl;

    vector< vector<int> > v(3,vector<int> (4,1));
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}