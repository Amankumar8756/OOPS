#include<bits/stdc++.h>

using namespace std;


class Engineer{

    public:

    string specilization;

    void work(){
        cout<<"my specilization is - "<<specilization<<endl;
    }
};



    class Youtuber {
        public:

        int subcriber;

        void contentcreator(){
            cout<<"my subcriber is that --> "<<subcriber<<endl;
        }
    };

    class CodeTeacher: public Engineer, public Youtuber{

  public:
   string name;

   CodeTeacher(string name,string specilization,int subcriber ){
    this->name = name;
    this->specilization = specilization;

    this->subcriber= subcriber;
   }

   void display(){

    cout<<"My name is - "<<name<<endl;

    work();
    contentcreator();
   }

    };





int main(){

    CodeTeacher a1("Aman","IT",2000);

    a1.display();


}