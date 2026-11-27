#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        int ID;
        char Name[100];
        char Section;
        int Total_Marks;
};

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        Student stu1, stu2, stu3;
        cin >> stu1.ID >> stu1.Name >> stu1.Section >> stu1.Total_Marks;
        cin >> stu2.ID >> stu2.Name >> stu2.Section >> stu2.Total_Marks;
        cin >> stu3.ID >> stu3.Name >> stu3.Section >> stu3.Total_Marks;

        Student topper = stu1;
        if(topper.Total_Marks < stu2.Total_Marks){
            topper = stu2;
        }else if(topper.Total_Marks == stu2.Total_Marks){
            if(topper.ID > stu2.ID){
                topper = stu2;
            }
        }

        if(topper.Total_Marks < stu3.Total_Marks){
            topper = stu3;
        }else if(topper.Total_Marks == stu3.Total_Marks){
            if(topper.ID > stu3.ID){
                topper = stu3;
            }
        }

        cout << topper.ID << " " << topper.Name << " " << topper.Section << " " << topper.Total_Marks << endl;
    }
    
    return 0;
}