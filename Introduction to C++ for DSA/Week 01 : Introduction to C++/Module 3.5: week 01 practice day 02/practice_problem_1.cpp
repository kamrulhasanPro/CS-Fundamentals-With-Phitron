#include<bits/stdc++.h>
using namespace std;
class Student
{
    public: 
	 string name;
	 int roll;
	 char section;
	 int math_marks;
	 int cls;
    
     Student(string n, int r, char s, int m, int c){
        name = n;
        roll = r;
        section = s;
        math_marks = m;
        cls = c;
     }
};

int main(){
    Student stu1("Kamrul Hasan", 1, 'A', 200, 5);
    Student stu2("Rahat", 20, 'A', 500, 5);
    Student stu3("Monir", 4, 'A', 500, 5);

    // cout << stu1.name << " " << stu1.roll << " " << stu1.section << " " << stu1.math_marks << " " << stu1.cls << endl;
    // cout << stu2.name << " " << stu2.roll << " " << stu2.section << " " << stu2.math_marks << " " << stu1.cls << endl;
    // cout << stu3.name << " " << stu3.roll << " " << stu3.section << " " << stu3.math_marks << " " << stu1.cls << endl;

    Student topper = stu1;
    if(stu2.math_marks > topper.math_marks ){
        topper = stu2;
    }else if (stu2.math_marks == topper.math_marks)
    {
        if(stu2.roll < topper.roll){
            topper = stu2;
        }
    }
    
    if(stu3.math_marks > topper.math_marks){
        topper = stu3;
    }else if (stu3.math_marks == topper.math_marks)
    {
        if(stu3.roll < topper.roll){
            topper = stu3;
        }
    }
    
    
    cout << topper.name;
    return 0;
}