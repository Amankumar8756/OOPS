#include <bits/stdc++.h>

using namespace std;

class Person
{
protected:
    string name;

public:
    void introduction()
    {
        cout << " my name is :- " << name << endl;
    }
};

class Employee : public Person
{

protected:
int salary ;

 public :
  void monthly_salary()
    {
        cout<<"my monthly salry is "<<salary<<endl;
    }
};

class Manager: public Employee{

    public:
    string department;

    Manager(string name, int salary, string department){
        this->name = name;
        this->salary= salary;
        this->department= department;
    }

    void display(){
        cout<<name<<" ,"<<salary<<" ,"<<department<<endl;
    }


};

int main(){
    Manager a1("aman",500, "sde1");
    a1.display();
    a1.monthly_salary();
}