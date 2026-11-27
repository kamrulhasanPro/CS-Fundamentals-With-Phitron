#include<bits/stdc++.h>
using namespace std;
class Student{
    public: 
        int roll;
        int cls;
        double gpa;
    // void construction(int r, int c, double g){
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // };
    Student(int r, int c, double g){
        roll = r;
        cls = c;
        gpa = g;
    };
};

int main(){
    // Student karim;
    // karim.roll = 28;
    // karim.cls = 5;
    // karim.gpa = 4.22;

    // Student rahim;
    // rahim.roll = 2;
    // rahim.cls = 5;
    // rahim.gpa = 5.00;

    // Student tareq;
    // tareq.construction(16, 4, 3.00);
    Student karim = Student(10, 5, 5.00);
    Student rahim = Student(1, 5, 4.99);
    Student tareq = Student(4, 4, 4.00);

    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << tareq.roll << " " << tareq.cls << " " << tareq.gpa << endl;

    return 0;
}