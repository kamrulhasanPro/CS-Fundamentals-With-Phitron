#include<stdio.h>
int main(){
    char x;
    scanf("%c", &x);

    // 1 way
    // if(x >= 'a' && x <= 'z'){
    //     char upparcase = 'A' + (x - 'a');  
    //     printf("%c", upparcase);     
    // }else{
    //     char lowercase = 'a' + (x - 'A');  
    //     printf("%c", lowercase); 
    // }

    // another way. 32 is the sirial different;
    if(x >= 'a' && x <= 'z'){
        char upparcase = x - 32;
        printf("%c", upparcase);     
    }else{
       char lowarcase = x + 32;
        printf("%c", lowarcase);  
    }
  
    return 0;
}