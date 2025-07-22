#include<bits/stdc++.h>

using namespace std;

class Student
{
  public:
  string name;
int age, roll_no;
  string grade;
 string gender;

};

int main() {
    Student s1;
    s1.name = "Aman Kumar";
    s1.age = 20;
    s1.roll_no = 2022168;
    s1.grade = "A+";
    s1.gender = "Male";
    cout<<s1.name<<" ";
    cout<<s1.roll_no<<" ";
    cout<<s1.gender<<" ";
    cout<<s1.age<<" ";
}