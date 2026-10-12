#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        // printf("%d\n", x);

        // 1. way
        // if(x == 0){
        //     printf("%d ", x);
        // }

        int divide = x; 
        do
        {
            printf("%d ", divide % 10);
            divide /= 10;
        }while (divide != 0);
        putchar('\n');

    }
    return 0;
}