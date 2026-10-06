#include<stdio.h>
int main(){
    int data[] = {1, 2,3 ,4 ,5};

    // length count with each element 4bytes; so 4bytes * 5elemments = 20bytes; 20bytes / 4bytes = 5elements;
    int length = sizeof(data) / sizeof(data[0]);
    for(int i = 0; i <= length; i++){
        int element = data[i];

        // countine again after this process in this loop if element is 4;
        if(element == 4){
            continue;
        }
        printf("Now Count: %d, Value: %d\n", i, element);
    }
    
    return 0;
}