#include<stdio.h>

void char_to_ascii(char c){
    printf("%d", c);
}

int main(){
    char c;
    scanf("%c", &c);

    char_to_ascii(c);
    return 0;
}