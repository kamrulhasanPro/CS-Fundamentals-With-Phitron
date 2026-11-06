#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    // for (int i = 0; i < n; i++)
    // {
    //     // space 
    //     for (int j = 0; j < i; j++)
    //     {
    //         printf(" ");
    //     }
        

    //     // number
    //     for (int j = 0; j < 2 * (n - i) - 1; j++)
    //     {
    //         printf("*");
    //     }
    //     putchar('\n'); 
    // }
    
    for (int i = n; i >= 1; i--)
    {
        // space
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        

        // number
        for (int j = 0; j < (2 * i - 1); j++)
        {
            printf("*");
        }
        
        putchar('\n');
    }
    
    return 0;
}