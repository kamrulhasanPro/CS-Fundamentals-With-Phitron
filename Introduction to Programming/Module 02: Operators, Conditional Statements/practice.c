// Zero or Non Zero
/*
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    if(n == 0){
        printf("Zero");
    }else{
        printf("Non Zero");
    }
    
    return 0;
}
*/

// 5 Marks for good hand writing
/*
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    printf("%d", n + 5);
    
    return 0;
}
*/

// Multiple or not
/*
#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    if(a % b == 0 || b % a == 0){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}
*/

// Floating Point Number
#include<stdio.h>
int main(){
    float n;
    scanf("%f", &n);

    printf("%.3f", n);
    return 0;
}


