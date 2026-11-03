#include<stdio.h>

/*
Scope is 3tpye in c.
    1. Local Scope(it's belongs inside the function)
    2. Block Scope(it's belonge inside curly brack "{}")
    3. Global Scope(it's declare outside the function)
*/

char myName[15] = "Kamrul Hasan"; // it's the global variable. it's used inside the everywhere.

int main(){
    int age = 20; // local scope and it's used inside the function

    printf("age -> %d\n", age);

    if(age > 10){
        char status[10] = "adult"; // it's the block scope inside {} curly bracks
        printf("status -> %s\n", status);
    }

    printf("My Name -> %s", myName);
    return 0;
}