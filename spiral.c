#include<stdio.h>
int main(){
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
    int minr=0;
    int maxc=n2-1;
    int maxr=n1-1;
    int minc=0;
    int count=0;
    int total=n1*n2;
    
    while(count<total){
        
        for(int j=minc;j<=maxc&&count<total;j++){
            printf("%d ",arr[minr][j]);
            count++;
        }
        minr++;
        // if (count>=total) break;
        for(int i=minr;i<=maxr&&count<total;i++){
            printf("%d ",arr[i][maxc]);
            count++;
        }
        maxc--;
        // if (count>=total) break;
        for(int j=maxc;j>=minc&&count<total;j--){
            printf("%d ",arr[maxr][j]);
            count++;
        }
        maxr--;
        // if (count>=total) break;
        for(int i=maxr;i>=minr&&count<total;i--){
            printf("%d ",arr[i][minc]);
            count++;
        }
        minc++;
    }
    
       
    
    return 0;
}