#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    string name;
    int age, roll_no;
    string grade;

public:
    // Setters
    void setname(const string& s) {
        if (s.empty()) {
            cout << "Invalid name" << endl;
            return;
        }
        name = s;
    }

    void setage(int a) {
        age = a;
    }

    void setgrade(const string& g) {
        grade = g;
    }

    // Getters (return values)
    string getname() {
        return name;
    }

    string getgrade() {
        return grade;
    }
};

int main() {
    Student s1;
    s1.setname("Aman Kumar");
    s1.setage(20);
    s1.setgrade("A+");

    cout << "Name: " << s1.getname() << endl;
    cout << "Grade: " << s1.getgrade() << endl;

    return 0;
}
