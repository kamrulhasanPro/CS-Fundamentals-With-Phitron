#include<stdio.h>

void printN(int n, int i){
    printf("%d\n", i);

    if(i == n){
        return;
    }

    printN(n, i + 1);
}

int main(){
    int n;
    scanf("%d", &n);

    printN(n, 1);
    return 0;
}