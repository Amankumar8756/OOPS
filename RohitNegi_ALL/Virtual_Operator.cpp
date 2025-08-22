#include<bits/stdc++.h>

using namespace std;

class Animal{
    public:

  virtual  void speak(){
        cout<<"Huhuhuhuhu"<<endl;

    }
};

class Dog: public Animal{
    public:

    void speak(){
        cout<<"Bark"<<endl;
    }
};


int main(){

    Animal *p;
    p= new Dog();
    p->speak();
}