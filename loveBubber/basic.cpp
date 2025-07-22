#include<bits/stdc++.h>

using namespace std;

class Hero{
// properties------

public:
int health;
char level;


};


int main(){
// creation of objects
    Hero aman;

  aman.health = 90;

  aman.level = 'A';


    cout<<"size "<< sizeof(aman)<<endl;

    cout<<"aman health -> "<<aman.health<<endl;

     cout<<"aman health -> "<<aman.level<<endl;
    return 0;

}