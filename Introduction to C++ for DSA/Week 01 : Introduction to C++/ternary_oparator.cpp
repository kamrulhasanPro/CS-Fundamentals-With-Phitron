#include<iostream>
using namespace std;

int main(){
    int x = 2;

    // if-elase way
    if(x % 2 == 0){
        cout << "Even Number is -> " << x << endl;
    }else{
        cout << "Odd Number is -> " << x << endl;
    }

    // ternary oparator same that. a shortcut version
    x % 2 == 0 ? cout << "Even Number is -> " << x : cout << "Odd Number is -> " << x;

    return 0;
}