#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int longestStreak = 0;

    int streakCount = 0;
    for(int i = 1; i <= n; i++){
        int x;
        scanf("%d", &x);

        if(x == 1){
            streakCount++;
        }

        if(x != 1 || i == n){
            if(longestStreak < streakCount){
                longestStreak = streakCount;
            }
            streakCount = 0;
        }
    }

    printf("%d", longestStreak);
    return 0;
}