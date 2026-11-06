#include<stdio.h>
#include<string.h>
int is_palindrome(char s[]){

    int len = strlen(s);
    int i = 0, j = len - 1;
    while (i < j)
    {
        if(s[i] != s[j]){
            return 0;
        }

        i++;
        j--;
    }
    
    return 1;
}
int main(){
    char s[1001];
    scanf("%s", s);

    int isRight = is_palindrome(s);

    if(isRight ==  1){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    return 0;
}