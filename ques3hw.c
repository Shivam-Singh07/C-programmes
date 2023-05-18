// without matrix!!
#include<stdio.h>
int main(){
    int n1,i,j,n2;
    printf("Enter the no of rows and columns");
    scanf("%d %d",&n1,&n2);
    int arr[n1][n2];
    int p,q;
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            scanf("%d",&p);
            arr[i][j]=p;
         
        }
    }
    int n3,n4;
    
    printf("Enter the no of rows and columns");
    scanf("%d %d",&n3,&n4);
    int brr[n3][n4];
    for(int k=0;k<n3;k++){
        for(int l=0;l<n4;l++){
            scanf("%d",&q);
            brr[k][l]=q;
         
        }
    }
    // printf("%d\n",arr[0][1]);
    for(int g=0;g<n1;g++){
        for(int h=0;h<n2;h++){
            // printf("%d\n",arr[g][h]); //doubt why zero??
            arr[g][h]=arr[g][h] + brr[g][h];
            printf("%d\n",arr[g][h]);
         
        }
    }
    for(int a=0;a<n1;a++){
        for(int b=0;b<n2;b++){
            printf("%d",arr[a][b]);
        }
        printf("\n");    
    
    }
    return 0;
}