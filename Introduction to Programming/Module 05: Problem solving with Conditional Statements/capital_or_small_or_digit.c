#include<stdio.h>
int main(){
    char x;
    scanf("%c", &x);

    if(x >= 'a' && x <= 'z'){
        printf("ALPHA\n");
        printf("IS SMALL");
    }else if (x >= 'A' && x <= 'Z'){
        printf("ALPHA\n");
        printf("IS CAPITAL");
    }else{
        printf("IS DIGIT");
    }
    
    
    return 0;
}