#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int star = 1;
    for (int i = 0; i < n; i++)
    {
        // spance
        for (int j = 0; j < n - i - 1; j++)
        {

            printf(" ");
        }
        

        // number
        for (int j = 0; j < star ; j++)
        {
            printf("*");
        }
        
        putchar('\n');
        star += 2;
    }
    
    return 0;
}