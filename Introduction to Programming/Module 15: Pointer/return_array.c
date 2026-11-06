#include<stdio.h>

int returnArray(int *a){
    a[0] = 100;
    return a[0];
}

int main(){
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int num =  returnArray(a);
    printf("%d\n", num);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}