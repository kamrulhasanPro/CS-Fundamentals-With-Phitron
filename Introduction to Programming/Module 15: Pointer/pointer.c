#include<stdio.h>
int main(){
    int x = 10;
    printf("%d\n", x);

    // here is get x veriable addres with address specifier "%p" and & get the address. 
    printf("%p\n", &x);

    // A pointer is a variable that stores the memory address of another variable as its value.
    /*
        pointer variable syntax: 
            dat_type * variable_name = &another_variable;
    */

    int * pointer = &x; // defin pointer variable
    printf("%p\n", pointer); // pointer variable print
    printf("%p\n", &pointer); // ;pointer address print
    printf("%d\n", *pointer); // get pointer variabble value

    // derefarance
    *pointer = 50;
    printf("%d\n", x); // get pointer variabble value
    
    
    return 0;
}