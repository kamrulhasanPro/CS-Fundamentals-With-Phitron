#include<bits/stdc++.h>
using namespace std;

class Student{
    public: 
        int roll;
        int cls;
        float gpa;

    Student(int roll, int cls, float gpa){
        (*this).roll = roll;
        (*this).cls = cls;
        (*this).gpa = gpa;
    }
};

int main(){
    //  static object/stack memory object variable
    Student rakib(1, 5, 5.50);

    Student* karim =new Student(1, 5, 5.00);

    cout << rakib.roll << " " << rakib.cls << " " << rakib.gpa << endl; 
    cout << karim->roll << " " << karim->cls << " " << fixed << setprecision(2) << karim->gpa << endl; 
    return 0;
}