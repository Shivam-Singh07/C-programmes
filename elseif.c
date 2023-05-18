#include<stdio.h>
int main(){
    int n;
    printf("enter the student no:");
    scanf("%d",&n);
    if(n>90 && n<=100){
        printf("excellent marks");
    }
    else if(n>80 && n<=90){
        printf("verygood");

    }
    else if(n>70 && n<=80){
        printf("good");


    }
    else if(n>60 && n<=70){
        printf("can do better");
    }
    else if(n>50 && n<=60){
        printf("average");
    }
    else if(n>40 && n<=50){
        printf("below average");
    }
    else {
        printf("fail");
    }

    return 0;
}