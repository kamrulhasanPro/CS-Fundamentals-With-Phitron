#include<stdio.h>
int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    long long int x = ((long long)a * b) - ((long long)c * d);
    printf("Difference = %lld", x);
    return 0;
}