#include<bits/stdc++.h>

using namespace std;

class Human{
protected:
    string name;
    int age;

    public:
    void work(){
        cout<<" i am working "<<endl;
    }

};

class Student : public Human{

    int roll_num, fees;

    public:
    Student(string name, int age, int roll_num, int fees){

        this->name=name;
        this->age=age;
        this->roll_num=roll_num;
        this->fees= fees;

    }
    public:
    void display(){
        cout<<"my name is;- "<<name<<" ,"<<"my age is :- "<<age<<" ,"<<roll_num<<" ,"<<fees<<endl;
    }


};

int main() {
    Student a1("Aman", 20, 101, 5000);
    a1.work();
    a1.display();
}