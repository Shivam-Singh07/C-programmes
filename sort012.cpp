#include<iostream>
#include<vector>
using namespace std;
int main(){
    // int n;
    vector<int> nums;
    int n=nums.size();
        int i=0,k=0,j=n-1;
        while(k<=j){
            if(k>j) break;
            if(nums[k]==2){
                int temp=nums[k];
                nums[k]=nums[j];
                nums[j]=temp;
                j--;
            }
            if(k>j) break;
            if(nums[k]==0){
                int temp=nums[k];
                nums[k]=nums[i];
                nums[i]=temp;
                k++;
                i++;
            }
            if(k>j) break;
            if(nums[k]==1){
                k++;
            }
            
        }
    return 0;
}