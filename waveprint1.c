#include <stdio.h>
#include <limits.h>
int main()
{
    int n1,n2;
    printf("enter the no of rows and columns::");
    scanf("%d %d", &n1, &n2);
    int p;
    int arr[n1][n2];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            scanf("%d", &p);
            arr[i][j] = p;
        }
    }
    int k=0;
    for(int i=0;i<n1;i++){
        if(i%2!=0){
            for(int j=n2-1;j>=0;j--){

                printf("%d ",arr[i][j]);
                k++;

            }
        

        }
        else{
            for(int j=0;j<n2;j++){
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");

    }
    return 0;
}    