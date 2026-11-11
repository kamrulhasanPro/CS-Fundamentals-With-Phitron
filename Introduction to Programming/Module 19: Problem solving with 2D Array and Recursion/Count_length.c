#include<stdio.h>

int count_length(char s[], int count){
    if(s[count] == '\0'){
        // count++;
        // printf("%d", count);
        return count;
    }

    int len = count_length(s, count + 1);
    return len;
}
int main(){
    char s[201];
    fgets(s, 201, stdin);

    int len = count_length(s, 0);
    printf("%d", len);
    return 0;
}