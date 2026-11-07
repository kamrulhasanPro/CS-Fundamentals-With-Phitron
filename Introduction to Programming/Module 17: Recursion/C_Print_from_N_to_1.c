#include<stdio.h>

void printN(int n){
    printf("%d ", n);
    
    if(n == 2){
        return;
    }
    
    printN(n - 1);
}

int main(){
    int n;
    scanf("%d", &n);

    printN(n);
    printf("%d", 1);
    return 0;
}