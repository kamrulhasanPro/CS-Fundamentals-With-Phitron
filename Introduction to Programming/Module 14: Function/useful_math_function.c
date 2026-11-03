#include<stdio.h>
#include<math.h>
int main(){
    int ans;
    // ceil -> returen upwards nearest integer.
    ans = ceil(4.2);
    printf("ceil of 4.2 -> %d\n", ans);

    // floor -> returen backwards nearest integer.
    ans = floor(4.2);
    printf("floor of 4.2 -> %d\n", ans);

    // round -> returen nearest integer.
    ans = round(4.2);
    printf("round of 4.2 -> %d\n", ans);

    // sqrt -> returen square value.
    ans = sqrt(25);
    printf("sqrt of 25 -> %d\n", ans);

    // pow -> returen the power of the values.
    ans = pow(4, 2);
    printf("pow of 4, 2 -> %d\n", ans);
    
    // abs -> returen positive integer.
    ans = abs(-10);
    printf("abs of -10 -> %d\n", ans);
    
    return 0;
}