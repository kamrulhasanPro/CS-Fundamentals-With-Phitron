#include<stdio.h>
void my_abs(int *ptr){
    if(*ptr < 0){
        // printf("%d", *ptr);
        *ptr *= -1;
    }
}
int main(){
    int n;
    scanf("%d", &n);

    my_abs(&n);

    printf("%d", n);
    return 0;
}