#include<stdio.h>

void printFunction(int a[]){
    printf("Print Function -> %p\n", a);
    a[2] = 300;
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    
}

int main(){
    int a[5] = {10, 20, 30, 40, 50};
    printf("Main Function -> %p\n", a);

    printFunction(a);

    printf("\n%d", a[2]);
    return 0;
}