#include<stdio.h>
#include<string.h>
int main(){
    char name[25];
    fgets(name, 25, stdin);

    // printf("%d", sizeof(name));
    // int count = 0;
    // int i = 0;
    // while (name[i] != 0)
    // {
    //     count++;
    //     i++;
    // }

    // for(int i = 0; name[i] != '\0' ;i++){
    //     count++;
    // }

    // printf("%d", count);

    // built in keyword
    int size = strlen(name);
    printf("%d", size);

    return 0;
}