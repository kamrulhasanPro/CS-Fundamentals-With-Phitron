#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    // int firstParts = 0;
    // for (int i = 0; i <= n; i+=2)
    // {
    //     if(i == 0){
    //         continue;
    //     }

    //     if(!firstParts && n % 2 == 0){
    //         // printf("%d ", i);
    //         firstParts = i;
    //     }

    //     if(firstParts && n % 2 == 0 && i + firstParts == n){
    //         // printf("%d ", i);

    //          printf("YES");
    //             return 0;
    //     }
    //     // printf("%d", i);
    // }

    if(n - 2 != 0 && (n-2) % 2 == 0){
        printf("YES");
    }else{
        printf("NO");
    }

    
    return 0;
}