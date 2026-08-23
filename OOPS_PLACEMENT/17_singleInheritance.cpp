#include<bits/stdc++.h>
using namespace std;

class Base{
       int data1;
       public:
       int data2;
       int getdata1(){
            return data1;
       }
       int getdata2(){
        return data2;
       }
       void set_data(){
        data1=100;
        data2=2;
       }
};

class Derived : public Base{

    public:
    int data3;
    void process(){
        data3=data2*getdata1();
    }

    void print_data(){
        cout<<"The value of data 1 is : "<<getdata1()<<endl<<"data 2 is : "<<data2<<endl<<"data 3 is "<<data3<<endl;
    }
};

int main() {
    Derived d;
    d.set_data();
    d.process();
    d.print_data();

return 0;
}

