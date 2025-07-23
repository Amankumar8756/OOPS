#include <bits/stdc++.h>

using namespace std;

class Hero
{
    // properties------
private:
    int health;

public:
    char level;
    int age ;


Hero(int health){
    cout<<"this -> "<<this<<endl;
    this->health = health;
}

// default constructors-------
     Hero(){
        cout<<"i am a constructor "<<endl;
     }


    int getHealth()
    {
        return health;
    }

    void setHealth(int h)
    {
        health = h;
    }
};

int main()
{
    // creation of objects  -- statically

    Hero aman(10); 

    cout<<"adderess of aman -> " <<&aman<<endl;
   
     // dynamically  allocations---
 
    Hero *h = new Hero(22);












    // // dynamically  allocations---

    // Hero * h = new Hero;

    // (*h).age = 12;
    // cout<<(*h).age<<"  age "<<endl;

    // cout << "size " << sizeof(aman) << endl;

    // //   aman.health = 90;
    // aman.setHealth(70);
    // cout << "aman health -> " << aman.getHealth() << endl;

    // aman.level = 'A';

    // // cout<<"aman health -> "<<aman.health<<endl;

    // cout << "aman level -> " << aman.level << endl;
    // return 0;
}