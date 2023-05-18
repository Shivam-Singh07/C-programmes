#include<stdio.h>
int main(){
    void india();
    india();
    return 0;
}

void australia(){
    printf("you are in australia\n");
    void england();
    england();
    return;
}
void india(){
    printf("you are in india\n");
    void australia();
    australia();
    return;
}

void england(){
    printf("you are in england\n");
    return;
}