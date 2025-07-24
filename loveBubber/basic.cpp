#include <bits/stdc++.h>
using namespace std;

class Hero
{
private:
    int health;

public:
    char *name;  // Fixed size array for name
    char level;
    int age;

    // Parameterized constructor
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    // Default constructorre
    Hero()
    {
        cout << "I am a constructor " << endl;
    }

    void print()
    {
        cout << endl;
        cout << "[ Name: " << this->name << " , ";
        cout << "Health: " << this->health << " , ";
        cout << "Level: " << this->level << " ]" << endl;
        cout << endl;
    }

    int getHealth()
    {
        return health;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char level)
    {
        this->level = level;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }
};

int main()
{
    
    // Hero hero1; // Calls default constructor

    // hero1.setHealth(22);
    // hero1.setLevel('A');
    // char name[7] = "AmanK";  // Fixed name
    // hero1.setName(name);

    // hero1.print(); // Display hero details

    // // Use default copy constructor

   
    // Hero hero2(hero1);  // Copy hero1 into hero2
    // hero2.print();


    //  hero1.name[0]='M';
    //  hero1.print();

    //  hero2.print();











// Hero aman(70, 'c');

// aman.print();

// // copy constructor 
// Hero mota(aman);

// mota.print();


    // creation of objects  -- statically

    // Hero aman;
    // aman.print();

    // cout<<"adderess of aman -> " <<&aman<<endl;

    //  // dynamically  allocations---

    // Hero *h = new Hero(22);

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