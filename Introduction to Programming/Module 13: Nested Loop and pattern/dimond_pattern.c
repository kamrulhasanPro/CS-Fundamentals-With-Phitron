#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        // spance: n - i - 1 
        for(int j = 0; j < n - i - 1; j++){
            printf("  ");
        }

        // number
        for(int j = 0; j <= i; j++ ){
            printf("%d ", j + 1);
        }

        // num 2 
        for(int j = i; j > 0; j--){
            printf("%d ", j);
        }
        putchar('\n');
    }
    for (int i = 0; i < n - 1; i++)
    {
        // space i + 1
        for (int j = 0; j < i + 1; j++)
        {
            printf("  ");
        }
        
        // number 1
        for (int j = 0; j < n - i - 1; j++)
        {
            printf("%d ", j + 1);
        }
        

        // number 2
        for(int j = n - i -  2; j > 0 ; j--){
            printf("%d ", j);
        }
        putchar('\n');
    }
    
    return 0;
}