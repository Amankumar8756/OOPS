#include<bits/stdc++.h>

using namespace std;


class Customer{

    string name;
    int balance;
   
    public:

    Customer(string name, int balance){
        this->name=name;
        this->balance=balance;
       
    }

void display(){
    cout<<balance<<" "<<name<<endl;
}

 void deposit(int amount){
    if(amount>0){
       balance += amount;

    }else{
        cout<<"invaild balances"<<endl;
    }
 }

 
  
};




int main(){
    Customer a1("Aman", 500) ;
    a1.display();
    a1.deposit(40);
   a1.display();
    

}