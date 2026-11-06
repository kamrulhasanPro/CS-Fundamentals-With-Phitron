#include<stdio.h>

void swap(int *x, int *y){
    int tem = *x;
    *x = *y;
    *y = tem;
}

int main(){
    int x, y;
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("x is %d, y is %d\n", x, y);
    return 0;
}