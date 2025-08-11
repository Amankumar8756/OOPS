#include<bits/stdc++.h>

using namespace std;

class Customer{

    string name;

    int account_number, balance;

   static  int total_customer;

    public:

    Customer(string name, int account_number, int balance){

        this->name = name;

        this->account_number = account_number;

        this->balance= balance;

        total_customer++;

    }

    void display(){

        cout<<name<<" "<<account_number<<" "<<balance<<endl; 
    }

   static void total_customers(){
        cout<<" total-custmers:- "<<total_customer<<endl;
    }
};

int Customer::total_customer= 0;

int main(){

    Customer A1("Aman", 1, 1000);

    Customer A2("Madam", 2, 1800);
  
    Customer A3("mota",3,20000);
  
    Customer::total_customers();
  
}