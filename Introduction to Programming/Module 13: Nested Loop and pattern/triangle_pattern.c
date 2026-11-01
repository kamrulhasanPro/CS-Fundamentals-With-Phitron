#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    char alphabet = 'a';
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        // space 
        for (int j = 0; j < (n-1) - i; j++)
        {
            printf("  ");
        }
        
        
        // number
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", alphabet + num  - 1);
            num++;
        }
        
        printf("\n");
    }
    
    return 0;
}