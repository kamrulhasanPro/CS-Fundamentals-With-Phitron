#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int star = 1;

    for (int i = 0; i < n; i++)
    {
        // space 
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        

        // number
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        putchar('\n');
        star += 2;
    }

    int backworkd = (n * 2) - 1;
    int backSpace = 0;
    for (int i = 0; i < backworkd; i+=2)
    {
        // printf("%d", i);
        // space
        for (int j = 0; j < backSpace; j++)
        {
            printf(" ");
        }
        

        // number
        for (int j = 0; j < backworkd - i; j++)
        {
            printf("*");
        }

        putchar('\n');
        backSpace++;
    }
    
    
    return 0;
}