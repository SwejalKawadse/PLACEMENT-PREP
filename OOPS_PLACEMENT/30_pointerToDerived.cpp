#include<bits/stdc++.h>
using namespace std;

class base{
int a,b;
public:
void get_data(int a,int b){
    this->a=a;
    this->b=b;
}

void print_data(){
cout<<"The value of a is : "<<a<<endl<<"The value of b is : "<<b<<endl;
}
};

class Derived: public base{
int c,d;
public:
void get_data(int c,int d){
    this->c=c;
    this->d=d;
}

void print_data(){
    cout<<"The value of c is : "<<c<<endl<<"The vaue of d is : "<<d<<endl;
}

};


int main() {
base* ptr;
base b;
b.get_data(2,5);
Derived d;
d.get_data(7,5);
ptr=&d;
ptr->get_data(5,7);
ptr->print_data();

return 0;
}