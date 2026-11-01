#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    pyramid(n);
    digit_pyramid(n);
    backword_trie_patter(n);
    backword_pyramid(n);
    return 0;
}

// peramid pattern
int pyramid(n){
    int star = 1;
    for (int i = 0; i < n; i++)
    {
        // space 
        for (int j = n - i -1; j > 0; j--)
        {
            printf(" ");
        }
        
        

        // number
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        
        putchar('\n');
        // star+=2;
    }

    return 0;
}

// digit peramid pattern
int digit_pyramid(n){
    int star = 1;
    for (int i = 0; i < n; i++)
    {
        // space 
        for (int j = n - i -1; j > 0; j--)
        {
            printf(" ");
        }
        
        

        // number
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", j + 1);
        }
        
        putchar('\n');
        // star+=2;
    }

    return 0;
}

int backword_trie_patter(n){
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        

        // number
        for (int j = n - 1; j >= i; j--)
        {
            printf("* ");
        }

        putchar('\n');
        
    }
    
}
int backword_pyramid(n){
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        

        // number
        for (int j = n - 1; j >= i; j--)
        {
            printf("* ");
        }

        // number 2
        for (int j = n - i - 1; j > 0 ; j--)
        {
            /* code */
            printf("* ");
        }
        

        putchar('\n');
        
    }
    
}

