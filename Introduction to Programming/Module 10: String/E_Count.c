#include<stdio.h>
#include<string.h>
int main(){
    char s[1000001];
    scanf("%s", &s);

    int size = strlen(s);

    int sum = 0;
    for(int i = 0; i < size; i++){
        
        sum += (s[i] - '0');
        
    }
    printf("%d\n", sum);

    // printf("%c", 2 + '5' + '2');

    return 0;
}