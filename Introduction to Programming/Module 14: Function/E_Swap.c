#include<stdio.h>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);

    int tem = x;
    x = y;
    y = tem;
    printf("%d %d", x, y);
    return 0;
}