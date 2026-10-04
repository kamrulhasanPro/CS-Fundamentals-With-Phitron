#include<stdio.h>
#include<stdbool.h>

int main(){
    // my details variable 
    // Syntax: data-type variable_name = value;
    int age = 18; 
    float result = 4.75;
    char GPA = 'A';
    bool isStudent = false;

    float height;
    height = 5.1;

    // print variable
    printf("%d\n", age);    // print age decimal
    printf("%f\n", result); // print result flot
    printf("%c\n", GPA);    // print GPA charecter
    printf("%f\n", height); // print flot number
    printf("%d\n", isStudent); // print bool data formate is decimal 0/1

    /*
        .2f mean = 2num collectt after the (.)
        if you need print a variable so that's you you wirte the data-type inside the print
    */
    printf("Age: %d, isStudent: %d, Result: %.2f, GPA: %c, Height: %.1f", age, isStudent, result, GPA, height); 
    

    return 0;
}