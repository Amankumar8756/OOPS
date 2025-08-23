#include<bits/stdc++.h>

using namespace std;


class Customer{
    string name;
    int balance, account_number;

     static int total_balance;
    public:

    Customer(string name, int balance, int account_number){
        this->name=name;
        this->balance= balance;
        this->account_number=account_number;

        total_balance +=balance;

    }
// deposit---
    void deposit(int amount){
        if(amount>0){
            balance += amount;


            cout<<amount<<" rs credite successfully "<<endl;

            total_balance += balance;

        }
        else {
            throw runtime_error(" Amount should be greater then ");
        }
    }

    // withdrow

    void withdrow(int amount){
        if(amount>0 && amount<=balance){
            balance -=amount;

            cout<<amount<<" rs withrow succesfully "<<endl;

            total_balance -= balance;
        }

        else if(amount<0){
            throw runtime_error(" amount should be greter then 0");
        }
        else{
          throw runtime_error("Your Balance is Low ");
        }
    }
    static void totalBalance(){
        cout<<total_balance<<" total balacne is available "<<endl;
    }

};

int Customer::total_balance=0;



int main(){

    Customer c1("Aman kumar ",10,12345678);
try{
    c1.deposit(200);
    c1.withdrow(5000);
    
    Customer::totalBalance();
}
catch(const runtime_error &e){
    cout<<"Exception Occcured: "<<e.what()<<endl;
   
}
 Customer::totalBalance();

}