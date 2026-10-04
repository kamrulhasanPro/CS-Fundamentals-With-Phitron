#include<stdio.h>
int main(){
    // arrithmetic oparation 
    int a = 10;
    int b = 5;

    // Summation 
    int sum = a + b;
    printf("Summation: %d\n", sum);
    // Subtraction
    int sub = a - b;
    printf("Subtraction: %d\n", sub);

    // Multiplication 
    int mul = a * b;
    printf("Multiplication: %d\n", mul);

    // Division 
    int div = a / b;
    printf("Division: %d\n", div);

    // division problem is 
    int x = 12;
    int y = 5; 
    int theResult = x / 5; // the result expact 2.4 but output 2 why?
    printf("theProblemInDivision: %d\n", theResult);

    // so solve it with it two way 1. keep anyone a float value. 2. converat anyone a floatinging value.
    // 1. 
    float m = 5;
    int n = 2;
    float theSolveResult1 = m / n; // expact 2.5 , and exatlly output 2.5
    printf("The solve divisio 1way: %f\n", theSolveResult1); 

    // 2. convert the int -> float a value
    float anotherSolveWay = (double)x / y; // expact 2.4 and exatlly output 2.4
    printf("conver int to float division solve: %f\n", anotherSolveWay);

    // Remainder(modulo) 
    // modulo work only in integer value
    int mod = a % b;
    printf("Modulo or division remainder: %d\n", mod);

    return 0;
}