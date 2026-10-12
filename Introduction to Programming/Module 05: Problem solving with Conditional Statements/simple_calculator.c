#include<stdio.h>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);

    // summation
    printf("%d + %d = %d\n", x, y, x + y);

     // multiplication
    printf("%d * %d = %lld\n", x, y, (long long)x * y);

    // subtraction
    printf("%d - %d = %d\n", x, y, x - y);
    
    return 0;
}