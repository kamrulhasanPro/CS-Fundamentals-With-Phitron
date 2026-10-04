#include<stdio.h>
int main() {
    /*
        Nested Condition Syntax: 
            if(condition){
                // true 
                if(condition){
                    // true
                }else{
                    // false
                }
            }else{
                // flase
            }
    */

    /*
        Suppose if i have grated or equeal than 5000tk than we will go to cocksbazer.
        but if greater than or equals 10,000tk than we will going to sant-martin after the cox-bazar trip.
        but if less than 5000tk so we will no going any where. 
    */

    int tk;
    scanf("%d", &tk);

    if(tk >= 5000){
        printf("Right now we are in cox-bazar!\n");
        if(tk >= 10000){
            printf("We will going to sant-martin after this cox-bazar trip!\n");
        } else {
            printf("We will going back to home after this cox-bazar trip.\n");
        }
    }else{
        printf("we willn't going anywhere.");
    }
}