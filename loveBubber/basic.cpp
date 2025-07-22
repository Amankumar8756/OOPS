#include <bits/stdc++.h>

using namespace std;

class Hero
{
    // properties------
private:
    int health;

public:
    char level;

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
    // creation of objects
    Hero aman; 

    cout << "size " << sizeof(aman) << endl;

    //   aman.health = 90;
    aman.setHealth(70);
    cout << "aman health -> " << aman.getHealth() << endl;

    aman.level = 'A';

    // cout<<"aman health -> "<<aman.health<<endl;

    cout << "aman level -> " << aman.level << endl;
    return 0;
}