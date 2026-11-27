#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    cout << x << endl;

    // ignor enter charecter
    cin.ignore();

    char s[100];
    // cin >> s;

    // same 
    // fgets(s, 100, stdin);
    cin.getline(s, 100);

    cout << s << endl;

    // A string class
    string name;
    cin >> name;
    cout << name;
    return 0;
}
