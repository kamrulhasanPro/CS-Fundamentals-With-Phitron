#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    
    int swap = a;
    a = b;
    b = swap;


    printf("%d %d", a, b);

    return 0;
}