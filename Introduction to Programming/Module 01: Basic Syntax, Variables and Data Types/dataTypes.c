#include<stdio.h>
#include<stdbool.h>



int main(){
    // data types
    int age = 18; // Integer (whole number)
    float result = 4.75; // Floating poiont number
    char GPA = 'A'; // Character
    bool isStudent = true; // Boolean include fromm <stdbool.h>
    double height = 5.1; // double float data type size 

    // data specifiers
    printf("Age: %d\n", age);
    printf("Result: %f\n", result);
    printf("GPA: %c\n", GPA);
    printf("isStudent: %d\n", isStudent);
    printf("Height: %lf\n", height);

    character();
    DataTypeSize();
    return 0;
}

int DataTypeSize() {
    printf("\nChar : %zu\n", sizeof(char));
    printf("Int : %zu\n", sizeof(int));
    printf("bool : %zu\n", sizeof(bool));
    printf("float : %zu\n", sizeof(float));
    return 0;
}

int character(){
    char name[] = "Kamrul";
    printf("My Name: %s", name);
    return 0;
}