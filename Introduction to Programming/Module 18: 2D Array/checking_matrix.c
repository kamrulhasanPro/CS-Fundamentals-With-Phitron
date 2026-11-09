#include<stdio.h>
int main(){
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

    if(r == 1){
        printf("Row Matrix");
        return 0;
    }

    if(c == 1){
        printf("Column Matrix");
        return 0;
    }

    int flagZero = 1;
    int unit = 1;
    int scalerRemamber = arr[0][0] !=  0 ? arr[0][0] : arr[0][r-1];
    int diagonal = 1;



    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(arr[i][j] != 0){
                flagZero = 0;
            }
            

            if(r != c){
                unit = 0;
                scalerRemamber = 0;
                diagonal = 0;

                continue;
            }
            
            if((arr[i][i] != 0 ? i != j : j != r - i - 1) && arr[i][j] != 0){
                unit = 0;
                scalerRemamber = 0;
                diagonal = 0;
            }


        }
        

        int conditionValue = arr[i][i] != 0 ? arr[i][i] : arr[i][r-i-1]; 
        if(conditionValue != 1){
            unit = 0;
        }
        if(conditionValue != scalerRemamber){
            scalerRemamber = 0;
        }
        
   
    }

    if(flagZero){
        printf("Zero Matrix");
    } else if (unit)
    {
        printf("Unit Matrix");
    } else if (scalerRemamber)
    {
        printf("Scaler Matrix");
    }else if(diagonal){
        printf("Diagonal Matrix");
    }else if(r != c){
        printf("Not Square Matrix");
    }

    


    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }
    
    
    return 0;
}