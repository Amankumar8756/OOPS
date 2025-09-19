#include<bits/stdc++.h>

using namespace std;


class Area{


    public:

    int calculateArea(int r){
        return 3.14*r*r;
    }

    int calculateArea(int l, int b){
        return l*b;
    }
};

int main(){

    Area A;
    cout<<"calculate areas - "<<A.calculateArea(4)<<endl;

     cout<<"calculate rectangles - "<<A.calculateArea(4,4)<<endl;
       cout<<"calculate areas - "<<A.calculateArea(4)<<endl;

     cout<<"calculate rectangles - "<<A.calculateArea(4,4)<<endl;

}
