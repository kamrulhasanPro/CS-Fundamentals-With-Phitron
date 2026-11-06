#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    // pyramid
    int cherecter = 1;
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 0; j < n - i ; j++)
        {
            printf(" ");
        }
        

        // number
        for (int j = 1; j <= cherecter; j++)
        {
            if(i % 2 == 0){
                printf("-");
            }else{
                printf("#");
            }
        }
        putchar('\n');
        cherecter += 2;
    }


    // backword pyramid
    int backwordMaxCherecter = (n - 1) * 2 -1;
    int space = 1;
    for (int i = n - 1; i >= 1; i--)
    {
        // space
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        

        // number
        for (int j = 1; j <= backwordMaxCherecter; j++)
        {
            if(i % 2 == 0){
                printf("-");
            }else{
                printf("#");
            }
        }

        putchar('\n');
        backwordMaxCherecter -= 2;
        space++;
    }
    
    
    return 0;
}