#include<bits/stdc++.h>

using namespace std;

class Human{
    public:
    string name;
    int age, weight;

};

class Student : public Human{
 public:
    int roll_no, fees;

    public:
    void display(){
        cout<<"name -> "<<name<<" ,"<<"roll_num -> "<<roll_no<<" ,"<<fees<<endl;
    }
};


int main(){
    Student A;
    A.name ="Aamna";
    A.roll_no = 13;
   A.fees = 200;
   A.display();
   A.display();

}