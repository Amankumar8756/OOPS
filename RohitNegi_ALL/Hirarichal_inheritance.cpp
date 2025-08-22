// #include<bits/stdc++.h>

// using namespace std;

// class Human{

//     protected:

//     string name;
//     int age;

//     public:
//     Human(){
        
//     }
//     Human(string name, int age){
//         this->name=name;
//         this->age=age;
//     }

// };

// class Student : public Human{
//  public:
//     int roll_no, fees;

//     public:
//     Student(string name, int roll_no, int fees){
//         this->name=name;
//         this->roll_no=roll_no;
//         this->fees=fees;

//     }
//     void display(){
//         cout<<"name -> "<<name<<" ,"<<"roll_num -> "<<roll_no<<" ,"<<fees<<endl;
//     }
// };

// class Teacher:public Human{

//  public:
//     string salary;

//     public:

//     Teacher(int salary, string name, int age){

//         this->salary=salary;
//         this->name=name;
//         this->age=age;


//     }
//     void works(){
//         cout<<salary<<" "<<name<<" "<<age;
//     }


// };


// int main(){
//     Student A("Aman",168,219);
//     A.display();
//   Teacher t1(2200, "Madam", 20);
//   t1.works();

// }
#include<bits/stdc++.h>
using namespace std;

class Human {
protected:
    string name;
    int age, weight;

public:
    Human() {}
    Human(string name, int age) : name(name), age(age) {}
};

class Student : public Human {
public:
    int roll_no, fees;

    Student(string name, int age, int roll_no, int fees)
        : Human(name, age), roll_no(roll_no), fees(fees) {}

    void display() {
        cout << "Name: " << name << ", Roll: " << roll_no << ", Fees: " << fees << endl;
    }
};

class Teacher : public Human {
public:
    int salary;

    Teacher(string name, int age, int salary)
        : Human(name, age), salary(salary) {}

    void works() {
        cout << "Name: " << name << ", Age: " << age << ", Salary: " << salary << endl;
    }
};

int main() {
    Student A("Aman", 19, 168, 219);
    A.display();

    Teacher t1("Madam", 20, 2200);
    t1.works();
}