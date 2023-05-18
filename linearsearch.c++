#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    bool flag=false;
    int count=0;
    for(int i=0;i<n;i++){
        count++;
        if(arr[i]==key){
            flag=true;
            break;
            
        }


    }
    if(flag==false){
        cout<<"key not present";
    }
    else{
        cout<<"key present"<<endl<<count-1<<" Index";
    }

    return 0;
}