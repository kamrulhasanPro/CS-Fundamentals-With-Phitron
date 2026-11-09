#include <stdio.h>
#include<stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    bool is_diagonal = true;
    bool is_unit = true;
    bool is_scaller = true;
    if(r == c){
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                // primary
                // if(i == j){
                //     if(arr[i][j] != 1){
                //         is_unit = false;
                //     } 
                //     if (arr[i][j] != arr[0][0]) 
                //     {
                //         is_scaller = false;
                //     } 
                // }

                // secandary
                
                if(i + j == r - 1){
                    if(arr[i][j] != 1){
                        is_unit = false;
                    } 
                    if (arr[i][j] != arr[0][r-1]) 
                    {
                        is_scaller = false;
                    } 
                }
                else{
                    if(arr[i][j] != 0){
                        is_diagonal = false;
                    }
                }
            }
            
        }
        
    }else{
        is_diagonal = false;
    }

    if(is_diagonal){
        printf("This is a Primary Diagonal Matrix.\n");
        if(is_unit){
            printf("It's unit diagonal matrix.");
        }else if(is_scaller){
            printf("It's scaller diagonal matrix.");
        }
    }else{
        printf("This is not a Primary Diagonal Matrix.");
    }

    return 0;
}