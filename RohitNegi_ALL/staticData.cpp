#include<bits/stdc++.h>

using namespace std;

class Customer{

    string name;

    int account_number, balance;

   static  int total_customer;

   static int total_balance;


    public:

    Customer(string name, int account_number, int balance){

        this->name = name;

        this->account_number = account_number;

        this->balance= balance;

        total_customer++;

        total_balance += balance;

  

    }

    void display(){

        cout<<name<<" "<<account_number<<" "<<balance<<endl; 
    }

    void deposit(int amount){
        if(amount>0){
            balance += amount;
            total_balance += amount;
        }
    }


    void withdrow(int amount){

        if(amount<balance && amount>0){
            balance -=amount;
            total_balance -= amount;
        }
    }

   static void total_customers(){
        cout<<" total-custmers:-> "<<total_customer<<endl;
         cout<<" total-balances:-> "<<total_balance<<endl;
        
    }
};

int Customer::total_customer= 0;

int Customer::total_balance= 0;



int main(){

    Customer A1("Aman", 1, 1000);

    Customer A2("Madam", 2, 1800);
  
    Customer A3("mota",3,20000);
  
    A3.deposit(500);
    A3.withdrow(100);

    Customer::total_customers();
     
  
}