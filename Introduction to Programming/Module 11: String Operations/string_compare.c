#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main(){
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    // menual compare string
    /*
    int i = 0;
    while (true)
    {
        if(a[i] == '\0' && b[i] == '\0'){
            printf("A and B is equal");
            break;
        }
        else if(a[i] == '\0'){
            printf("A is smallest");
            break;
        }else if (b[i] == '\0')
        {
            printf("B is smallest");
            break;
        }else if (a[i] > b[i])
        {
            printf("B is smallest");
            break;
        }else if (b[i] > a[i])
        {
            printf("A is smallest");
            break;
        }else if (a[i] == b[i])
        {
            i++;
        }
    }
    */

    // built in fn
    int val = strcmp(a, b);
    
    if(val < 0){
        printf("A is smallest");
    }else if(val > 0){
        printf("B is smallest");
    }else if(val == 0){
        printf("A and B is equal");
    }
    
    return 0;
}
