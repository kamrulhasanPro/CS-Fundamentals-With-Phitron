#include<stdio.h>

void printLove(int n){
    printf("I love Recursion\n");

    if(n == 1){
        return;
    }

    printLove(n - 1);
}

int main(){
    int n;
    scanf("%d", &n);

    printLove(n);
    return 0;
}