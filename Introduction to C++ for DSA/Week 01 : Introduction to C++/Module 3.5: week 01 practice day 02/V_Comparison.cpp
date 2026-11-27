#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    char s;

    cin >> a >> s >> b;

    if(s == '>'){
        a > b ? cout << "Right" : cout << "Wrong";
    }else if(s == '<'){
        a < b ? cout << "Right" : cout << "Wrong";
    }else{
        a == b ? cout << "Right" : cout << "Wrong";
    }

    // cout << a << s << b;
    return 0;
}