#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    // pyramid
    for (int i = 0; i <  (n / 2) + 6 ; i++)
    {
        // space
        for (int j = 0; j < ((n / 2) + 6) - i - 1; j++)
        {
            printf(" ");
        }

        // star
        for (int j = 0; j < (2 * (i + 1)) - 1 ; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    // spaces line;
    for (int i = 0; i < 5; i++)
    {
        // space
        printf("     ");
        

        // line star
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    
    
    return 0;
}