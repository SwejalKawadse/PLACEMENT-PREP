#include<bits/stdc++.h>
using namespace std;

class Base{

    int a;

    protected:
    int b;

    public:
    int c;

    Base(){
        a=2;
        b=4;
        c=6;
    }

    Base(int one,int two,int three){
        a=one;
        b=two;
        c=three;
    }
};

class Derived : protected Base{
     public:
     int d;

     Derived(){
        d=10;
     }

     void print_data(){
        cout<<"The value of b is : "<<b<<endl<<"c is : "<<c<<endl<<"d is : "<<d<<endl;
     }

};

int main() {
    Base b(8,6,4);
    Derived d;
    d.print_data();

return 0;
}