#include<bits/stdc++.h>
using namespace std;
// cunstructors
class Customer
{
    public:
      string name;
      int acc_bal;
      int balance;

    Customer(){
        cout<<" cunstrucgtor is called";

    }

    // parametraized unstructors
    Customer(string a, int b, int c){

        name = a;
        acc_bal = b;
        balance = c;
    }

};

int main()
{
    Customer A1("Aman kumar",123,1000);
  
}