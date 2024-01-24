#include<stdio.h>

void printPattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("The following pattern is:\n");
    printPattern(n);
    return 0;
}