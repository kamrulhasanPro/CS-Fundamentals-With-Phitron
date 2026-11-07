#include<stdio.h>

// Print 1 to 5
void print1toN(int i){
    printf("Print 1 to 5 -> %d\n", i);
    if(i == 5){
        return;
    }
    print1toN(++i);
}

// Print N to 1
void printNto1(int n){

    if(n <= 0){
        printf("Please give me positive number.\n");
        return;
    }

    printf("Print N to 1 -> %d\n", n);

    if(n == 1){
        return;
    }

    printNto1(--n);
}

// print a array with recursion function
void printArray(int arr[], int n, int index){
    printf("Array: index -> %d, value -> %d\n", index, arr[index]);
    if(index == (n-1)){
        return;
    }

    printArray(arr, n, ++index);
}

void reverseNto1(int n){
    if(n == 6){
        return;
    }

    reverseNto1(n+1);
    printf("Reverse -> %d\n", n);
}

int main(){
    // print1toN(1);
    // printNto1(10);
    // int arr[5] = {10, 20, 30, 40, 50};
    // printArray(arr, 5, 0);

    reverseNto1(1);
    return 0;
}