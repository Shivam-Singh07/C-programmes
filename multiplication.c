#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int r1,c1;
    scanf("%d%d",&r1,&c1);
    int brr[r1][c1];
    for(int i=0;i<r;i++){
        for(int j=0;(j<c);j++){
            scanf("%d",&brr[i][j]);
            
        }
    }
    if(c==r1){
        printf("multiplication is possible:!");
        int crr[r][c1];
        for(int i=0;i<r;i++){
         for(int j=0;j<c1;j++){
            int p=0;
            // crr[i][j]+=arr[i][j]*brr[j][i];
            for(int k=0;k<c1;k++){
                p+=arr[i][k]*brr[k][j];
                
            }
            crr[i][j]=p;
            
         }
        // printf("\n");
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c1;j++){
                printf("%d ",crr[i][j]);
            }
            printf("\n");
        }
        
    }
    
    return 0;
}