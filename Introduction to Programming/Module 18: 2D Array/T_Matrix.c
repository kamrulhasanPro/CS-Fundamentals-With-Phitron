#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d", &n);

    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int primarySum = 0, secondarySum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == j){
                primarySum += matrix[i][j];
            }

            if(i + j == n -1){
                secondarySum += matrix[i][j];
            }

        }    
    }
    
    printf("%d", abs(primarySum - secondarySum));

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("%d ", matrix[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
}