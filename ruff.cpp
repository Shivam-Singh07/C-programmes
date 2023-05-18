#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=3;
    vector<vector<int>> v(n*n);
        int maxr=n-1;
        int maxc=n-1;
        int minr=0;
        int minc=0;
        int k=1;
        while(k<n*n){
            for(int i=minc;i<=maxc;i++){
                v[minr][i]=k;
                k++;

            }
            minr++;
            if(k>=n*n) break;
            for(int j=minr;j<=maxr;j++){
                v[j][maxc]=k;
                k++;
            }
            maxc--;
            if(k>=n*n) break;
            for(int i=maxc;i>=minc;i--){
                v[maxr][i]=k;
                k++;
            }
            maxr--;
            if(k>=n*n) break;
            for(int j=maxr;j>=minr;j--){
                v[j][minc]=k;
                k++;
            }
            minc++;
        }
        for(int i=0;i<3;i++){
            for(int )
        }
        
        // return v;
    

    return 0;
}