#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums(3);
    for(int i=0;i<3;i++) cin>>nums[i];
    int idx=-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }
        cout<<idx<<endl;
        if(idx==-1){
            for(int i=0,j=nums.size()-1;i<j;i++,j--){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
        else{
        for(int i=idx+1,j=nums.size()-1;i<j;i++,j--){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
        for(int i=0;i<3;i++) cout<<nums[i]<<" ";
        cout<<endl;
        for(int i=idx+1;i<nums.size();i++){
            if(nums[idx]<nums[i]){
                cout<<i<<endl;
                int temp=nums[idx];
                nums[idx]=nums[i];
                nums[i]=temp;
            }
        }    
        for(int i=0;i<3;i++) cout<<nums[i]<<" ";
        }    
    return 0;
}