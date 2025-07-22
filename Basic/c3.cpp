#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age, roll_no;
    string grade;

public:
    // Setters
    void setname(const string& s) { name = s; }
    void setage(int a) { age = a; }
    void setroll_no(int r) { roll_no = r; }
    void setgrade(const string& g) { grade = g; }

    // Getters
    string getname() const { return name; }
    int getage() const { return age; }
    int getroll_no() const { return roll_no; }
    string getgrade() const { return grade; }
};

int main() {
    Student s1;
    s1.setname("Aman");
    s1.setage(20);
    s1.setroll_no(101);
    s1.setgrade("A+");
    cout << "Name: " << s1.getname() << endl;
    cout << "Age: " << s1.getage() << endl;
    cout << "Roll No: " << s1.getroll_no() << endl;
    cout << "Grade: " << s1.getgrade() << endl;
    return 0;
}
