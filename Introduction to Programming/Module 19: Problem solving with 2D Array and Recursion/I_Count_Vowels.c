#include<stdio.h>
#include<string.h>

void vowel_count(char s[], int len, int count){
    if(
        s[len] == 'a' ||
        s[len] == 'e' ||
        s[len] == 'i' ||
        s[len] == 'o' ||
        s[len] == 'u' ||
        s[len] == 'A' ||
        s[len] == 'E' ||
        s[len] == 'I' ||
        s[len] == 'O' ||
        s[len] == 'U' 
    ){
        count++;
    }

    if(len == 0){
        printf("%d", count);
        return;
    }
    vowel_count(s, len - 1, count);
}
int main(){
    char s[201];
    fgets(s, 201, stdin);

    int len = strlen(s);
    vowel_count(s, len, 0);
    
    return 0;
}