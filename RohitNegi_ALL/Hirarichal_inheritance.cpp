#include<bits/stdc++.h>

using namespace std;

class Human{

    protected:

    string name;
    int age, weight;

    public:
    Human(){
        
    }

};

class Student : public Human{
 public:
    int roll_no, fees;

    public:
    Student(string name, int roll_no, int fees){
        this->name=name;
        this->roll_no=roll_no;
        this->fees=fees;

    }
    void display(){
        cout<<"name -> "<<name<<" ,"<<"roll_num -> "<<roll_no<<" ,"<<fees<<endl;
    }
};

class Teacher:public Human{

 public:
    string salary;

    public:

    Teacher(int salary, string name, int age){

        this->salary=salary;
        this->name=name;
        this->age=age;


    }
    void works(){
        cout<<salary<<" "<<name<<" "<<age;
    }


};


int main(){
    Student A("Aman",168,219);
    A.display();
  Teacher t1(2200, "Madam", 20);
  t1.works();

}