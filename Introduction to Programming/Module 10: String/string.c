#include<stdio.h>
int main(){
    int n;
    scanf("%d ", &n);
    
    char arr[n];
    for(int i = 0; i < n; i++){
        scanf("%c ", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        printf("%c", arr[i]);
    }

    // menual char array . actually it's a arry like that in the behindisin.
    char name[] = {'K', 'a', 'm', 'r', 'u', 'l', '\0'};
    printf("\nName: %s", name); 

    return 0;
}