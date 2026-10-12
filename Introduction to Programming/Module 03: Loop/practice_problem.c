#include<stdio.h>

// Print I Love Practice
/*
int main(){
    printf("I Love Practice");
    return 0;
}
*/

// Sum of Two Numbers
/*
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    printf("%d", a + b);
    
    return 0;
}
*/

// Variables

int main() {
    int a;
    long long int b;
    float c;
    char d;
    
    scanf("%d %ld %f", &a, &b, &c);

    // this a (enter) charecter problem
    // scanf("%c", &d);

    // solution ways
    // scanf("%c%c", &d, &d); // first input take (enter)charecter and second is get the main Charecter
    // scanf(" %c", &d); // empty space is auto track it's (enter) charecter
    // scanf("\n%c", &d); // \n get a new line then input the main charecter
    getchar(); // getchar take a enter or new line
    scanf("%c", &d);

    
    printf("%d\n%ld\n%.2f\n%c\n", a, b, c, d);
      
    return 0;
}



// N Times
/*
int main() {
    int n;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        printf("I Love Practice\n");
    }
       
    return 0;
}
*/

// Divisible by 5 or Not
/*
int main() {
    int n;
    scanf("%d", &n);
    
    for(int i = 1; i<=n; i++){
        if(i % 5 == 0){
            printf("%d Yes\n", i);
        }else{
            printf("%d No\n", i);
        }
    }
       
    return 0;
}
*/