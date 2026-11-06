#include<stdio.h>

int arethmetic(a, b, s) {
    int ans;
    if(s == '+'){
        ans = a + b;
    }else if(s == '-'){
        ans = a - b;
    }else if (s == '*')
    {
        ans = a * b;
    }

    return ans;
}

int main(){
    int a, b, c;
    char s, q;

    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);

    int ans = arethmetic(a, b, s);
    

    if(ans == c){
        printf("Yes");
    }else{
        printf("%d", ans);
    }
    // printf("%d %c %d %c %d", a, s, b, q, c);
    return 0;
}