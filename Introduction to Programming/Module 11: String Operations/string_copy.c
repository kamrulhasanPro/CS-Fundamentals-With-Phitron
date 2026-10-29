#include<stdio.h>
#include<string.h>

int main(){
    char a[11], b[11];
    scanf("%s %s", &a, &b);

    // menual way
    /*
    int sizeB = strlen(b);
    for (int i = 0; i <= sizeB; i++)
    {
        a[i] = b[i];
        // printf("%c", b[i]);
    }
    */


    // built in fn 
    strcpy(b, a);

    printf("%s %s", a, b);
    return 0;
}