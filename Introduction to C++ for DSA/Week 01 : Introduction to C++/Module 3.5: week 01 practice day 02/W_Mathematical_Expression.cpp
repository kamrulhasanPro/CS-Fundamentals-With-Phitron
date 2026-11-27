#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    char s, q;

    cin >> a >> s >> b >> q >> c;
    if(s == '+'){
        int summation = a + b;
        summation == c ? cout << "Yes" : cout << summation;
    }else if(s == '-'){
        int subtraction = a - b;
        subtraction == c ? cout << "Yes" : cout << subtraction;
    }else{
        long long mulplication = (long long)a * b;
        mulplication == c ? cout << "Yes" : cout << mulplication;
    }

    // cout << a << s << b << q << c;
    return 0;
}