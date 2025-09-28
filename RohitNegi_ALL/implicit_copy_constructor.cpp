#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
};

int main() {
    Student s1;
    s1.name = "Aman";
    s1.age = 21;

    // Compiler-generated implicit copy constructor is called
    Student s2 = s1;  


    cout << s1.name << " " << s1.age << endl;
    cout << s2.name << " " << s2.age << endl; // Aman 21
}
