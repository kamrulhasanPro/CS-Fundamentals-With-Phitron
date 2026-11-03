#include<stdio.h>

/*
    function syntaxt:
        return_type fn_name(parameter){
            retrun type_value;
        }

        // call
        fn_name(argument);
*/

// function defination
int sum(int a, int b){
    int ans = a + b;
    return ans;
}

int sub(int a, int b){
    int ans = a - b;
    return ans;
}

// this is main function, taht require for c programming.
int main(){

    // function call. The function return two paramenter sumation. 
    int val = sum(60, 40);
    int val2 = sub(39, 20);

    printf("sum -> %d,\nsub -> %d", val, val2);
    return 0;
}

