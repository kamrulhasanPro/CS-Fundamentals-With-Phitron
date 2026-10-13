#include<stdio.h>
int main(){
    int a[4];

    // input
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }

    // printf("%d", a[3]);

    int sumArray = 0;

    // output
    for (int i = 4 - 1; i >= 0; i--)
    {
        printf("%d\n", a[i]);
        sumArray += a[i];
    }
    printf("sumArray: %d\n", sumArray);
    
    return 0;
}