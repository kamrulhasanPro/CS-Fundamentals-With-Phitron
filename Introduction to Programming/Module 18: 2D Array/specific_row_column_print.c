#include<stdio.h>
int main(){
    int r, c;
    scanf("%d %d", &r, &c);

    int matrix[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
        
    }
    
    // all row column 
    /*
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }   
    */
    

    // specific row 
    printf("Specific Row\n");
    for (int i = 0; i < c; i++)
    {
        printf("%d ", matrix[2][i]);
    }
    

    printf("\n");

    // specific column 
    printf("Specific Column\n");
    for (int i = 0; i < r; i++)
    {
        printf("%d\n", matrix[i][2]);
    }
    
    
    // row range print 1row to lastrow
    printf("Range row and last column 1row to lastrow\n");
    for (int i = 1; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}