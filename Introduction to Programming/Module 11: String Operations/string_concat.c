#include<stdio.h>
#include<string.h>
int main(){
    char a[20], b[11];
    scanf("%s %s", &a, &b);

    // menual concat
    /*
    int sizeA = strlen(a), sizeB = strlen(b);
    for (int i = 0; i <= sizeB; i++)
    {
        a[sizeA + i] = b[i];
    }
    */
    
    // built in fn
    strcat(b, a);

    printf("%s %s", a, b);
    return 0;
}