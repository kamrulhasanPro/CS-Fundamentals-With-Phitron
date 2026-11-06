#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    char code[a + b + 2];
    scanf("%s", code);

    
    

    // if(code[a] == '-' ){
        
    //     int skip = (a + b + 1) / 2;
    //     // printf("%d", skip);
    //     for (int i = 0; i < a + b + 2; i++)
    //     {
    //         if(i == skip){
    //             continue;
    //         }
            
    //         if(code[i] < '0' || code[i] > '9'){
    //             printf("%c", code[i]);
    //             printf("No");
    //             return 0;
    //         }
    //         // printf("%c", code[i]);
    //     }   
    //     printf("Yes");

    // }else{
    //     printf("No");
    // }


    for (int i = 0; i < a+b+1; i++)
    {
        // printf("%c", code[i]);
        if(i == a){
            if(code[i] != '-'){
                printf("No");
                return 0;
            }
        }else{
            if(code[i] < '0' || code[i] > '9'){
                printf("No");
                return 0;
            }
        }
    }
    
    printf("Yes");
    return 0;
}