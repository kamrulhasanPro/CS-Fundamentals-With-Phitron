#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    // squreSerialPattern(n);
    // squreStarPattern(n);
    // squreAlphabetPattern(n);
    // squreSerialNumPattern(n);
    triangleStarPattern(n);
    return 0;
}

int squreSerialPattern(n) {
     /*
        need output print: 
            1 2 3 4
            1 2 3 4
            1 2 3 4
            1 2 3 4

    */
    for(int i  = 0; i < n; i++){
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}


int squreStarPattern(n){
    /*
        need output: 
            * * * *
            * * * *
            * * * *
            * * * *
    */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}

int squreAlphabetPattern(n){
    /*
        need output: 
            A B C D
            A B C D
            A B C D
            A B C D
    */
    char firstChar = 'A';
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            printf("%c ", firstChar + j);
        }
        printf("\n");
    }
}


int squreSerialNumPattern(n){
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", num);
            num++;
        }
        putchar('\n');
    }
    
}

int triangleStarPattern(n){
    for(int i = 0; i < n; i++){

        // if need space
        // for(int j = 0; j < n; j++){
        //     j <= i ? printf("* ") : printf(" "); 
        // }

        for(int j = 0; j <= i; j++){
            printf("* ");
        }
        putchar('\n');
    }

    return 0;
}