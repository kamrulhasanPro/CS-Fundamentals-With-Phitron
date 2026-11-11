#include<stdio.h>
#include<math.h>
int main(){
    int matrix[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
        }   
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(matrix[i][j] == 1){
                int moveRows  = abs(3 - (i + 1));
                int moveColumns = abs(3 - (j + 1));
                // printf("%d %d", moveRows, moveColumns);
                printf("%d", moveRows + moveColumns);
                break;
            }
        }   
    }

    return 0;
}