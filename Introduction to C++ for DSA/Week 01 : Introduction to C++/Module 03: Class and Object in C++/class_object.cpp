#include<bits/stdc++.h>
using namespace std;

class Student{
    public: 
        char name[100];
        int roll;
        char gpa[3];
};

int main(){
    Student kamrul, rahat;
    // kamrul.roll = 10;
    
    // char tempName[100] = "kamrul";
    // strcpy(kamrul.name, tempName);
    
    // char temGpa[3] = "A+";
    // strcpy(kamrul.gpa, temGpa);

    // without space
    // cin >> kamrul.name >> kamrul.roll >> kamrul.gpa;
    // cin >> rahat.name >> rahat.roll >> rahat.gpa;

    // with space
    cin.getline(kamrul.name, 100);
    cin >> kamrul.roll >> kamrul.gpa;

    cin.ignore();
    cin.getline(rahat.name, 100);
    cin >> rahat.roll >> rahat.gpa;

    cout << kamrul.name << " " << kamrul.roll << " " << kamrul.gpa << endl;
    cout << rahat.name << " " << rahat.roll << " " << rahat.gpa << endl;

    return 0;
}