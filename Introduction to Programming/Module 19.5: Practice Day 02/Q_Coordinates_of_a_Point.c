#include<stdio.h>
int main(){
    float X,Y;
    scanf("%f %f", &X, &Y);
    
    // if(X == 0 && Y == 0){
    //      printf("Origim");
    //     return 0;
    // };

    // if(X >= 0){
    //     if(Y > 0){
    //         printf("Q1");
    //     }else if(Y < 0){
    //         printf("Q4");
    //     }else{
    //         // printf("%f %f", X, Y);
    //         if(Y == 0){
    //             printf("Eixo X");
    //         }else{
    //             printf("Eixo Y");
    //         }
    //     }
    // }else if (X <= 0)
    // {
    //     if(Y > 0){
    //         printf("Q2");
    //     }else if(Y < 0){
    //         printf("Q3");
    //     }else{
    //         if(Y == 0){
    //             printf("Eixo X");
    //         }else{
    //             printf("Eixo Y");
    //         }
    //     }
    // }

    if(X == 0 && Y == 0){
        printf("Origem");
    }else if(Y == 0){
        printf("Eixo X");
    }else if(X == 0){
        printf("Eixo Y");
    }else{
        if(X > 0){
            if(Y > 0){
                printf("Q1");
            }else{
                printf("Q4");
            }
        }else{
            if(Y > 0){
                printf("Q2");
            }else{
                printf("Q3");
            }
        }
    }




    
    return 0;
}