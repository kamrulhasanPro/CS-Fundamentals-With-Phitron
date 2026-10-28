#include<stdio.h>
#include<string.h>
int main(){
    char a[11], b[11];
    scanf("%s %s", &a, &b);

    int sizeA = strlen(a);
    int sizeB = strlen(b);
    printf("%d %d\n", sizeA, sizeB);
    printf("%s%s\n", a, b);

    // best swapping solution
    int tem = a[0];
    a[0] = b[0];
    b[0] = tem;
    printf("%s %s", a, b);

    // for (int i = 0; i < sizeA; i++)
    // {
    //     if(i == 0){
    //         printf("%c", b[0]);
    //     }else{
    //         printf("%c", a[i]);
    //     }
    // }

    //  for (int i = 0; i < sizeB; i++)
    // {
    //     if(i == 0){
    //         printf(" %c", a[0]);
    //     }else{
    //         printf("%c", b[i]);
    //     }
    // }
    
    // printf("%s %s", a, b);

    return 0;
}