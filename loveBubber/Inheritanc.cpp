#include <bits/stdc++.h>
using namespace std;

class Human {
public:
    int height;
    int weight;
    int age;

    int getHeight() {
        return this->height;
    }

    void setWeight(int w) {
        this->weight = w;
    }
};

// Child class (inherits from Human)--------------------
class Male : public Human {
public:
    string color;

    void sleep() {
        cout << "The male is sleeping" << endl;
    }
};

int main() {
    Male obj1;
    obj1.height = 180; 
    cout << obj1.height << endl;
    cout<<obj1.weight<<endl;
        cout<<obj1.color<<endl;


    obj1.sleep(); 
      obj1.sleep(); 
    return 0;
}