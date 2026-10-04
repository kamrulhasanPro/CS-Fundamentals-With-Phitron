#include<stdio.h>
int main() {
    // take input 
    int a;
    float b;
    scanf("%d", &a);
    scanf("%f", &b);
    printf("input value: %d", a);
    printf("B value: %f", b);

    // multiple input with togather
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    printf(" %d %d %d", x, y, z);
    
    return 0;
}