#include<stdio.h>
void firstCharCapital(char name[]){
    name[0] = 'H';
}

int main(){
    char name[6];
    scanf("%s", name); 

    // printf("%p\n", name);
    // printf("%p\n", &name[0]);
    firstCharCapital(name);

    printf("%s", name);
    return 0;
}