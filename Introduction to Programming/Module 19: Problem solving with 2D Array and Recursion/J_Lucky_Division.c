#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int luckyArr[14] = {4, 7, 44, 47, 77, 74, 444, 447, 474, 477, 744, 747, 774, 777};

    // if(
    //     n == 4 ||
    //     n == 7 ||
    //     n == 44 ||
    //     n == 47 ||
    //     n == 74 ||
    //     n == 77 ||
    //     n == 444 ||
    //     n == 447 ||
    //     n == 474 ||
    //     n == 477 ||
    //     n == 744 ||
    //     n == 747 ||
    //     n == 774 ||
    //     n == 777 
    // ){
    //     printf("YES");
    //     return 0;
    // }

    // if(n % 4 == 0 || n % 7 == 0){
    //     printf("YES");
    //     return 0;
    // }

    for (int i = 0; i < 14; i++)
    {
        if(n == luckyArr[i] || n % luckyArr[i] == 0 ){
            printf("YES");
            return 0;
        }
    }
    


    printf("NO");
    return 0;
}