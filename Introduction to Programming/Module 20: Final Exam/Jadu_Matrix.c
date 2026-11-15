#include<stdio.h>
#include<stdbool.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    bool is_jadu_matrix = true;
    if(n == m){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(j == i || j == n - 1 - i){
                    // printf("%d ", matrix[i][j]);
                    if(matrix[i][j] != 1){
                        is_jadu_matrix = false;
                        break;
                    }
                }else{
                    // printf("%d", matrix[i][j]);
                    if(matrix[i][j] != 0){
                        is_jadu_matrix = false;
                        break;
                    }                    
                }
            }

            if(is_jadu_matrix == false){
                break;
            }
            // putchar('\n');
        }
    }else{
        is_jadu_matrix = false;
    }

    if(is_jadu_matrix){
        printf("YES");
    }else{
        printf("NO");
    }

    
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         printf("%d ", matrix[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
}