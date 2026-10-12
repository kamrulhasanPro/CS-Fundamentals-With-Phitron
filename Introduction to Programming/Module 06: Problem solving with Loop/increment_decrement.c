#include<stdio.h>
int main(){
    int x = 10;
    x = x + 1;
    x += 1; // 1 is dynamic value
    x++;
    printf("%d\n", x);

    x = x - 1;
    x -= 2; // 2 is dynamic value 
    x--;
    printf("%d\n", x);

    x = x * 2;
    x *= 2;
    printf("%d\n", x);

    x = x / 2;
    x /= 2;
    printf("%d", x);
    
    return 0;
}