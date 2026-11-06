#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        

        // number
        for (int j = i; j >= 0; j--)
        {
            printf("%d", j + 1);
        }

        printf("\n");
    }
    
    return 0;
}