#include<stdio.h>


void reverseArray(int a[],int n){
    int j = n -1;
    for (int i = 0; i <= j; i++)
    {
        int tem = a[i];
        a[i] = a[j];
        a[j] = tem;

        j--;
    }
    
}

int main(){
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    reverseArray(a, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}