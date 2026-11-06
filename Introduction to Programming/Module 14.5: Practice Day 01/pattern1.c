#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - 1- i; j++)
        {
            printf(" ");
        }
        

        // number
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        
        putchar('\n');
    }
    
    return 0;
}