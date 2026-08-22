#include<bits/stdc++.h>
using namespace std;

class Y;

class X{
    int num1;
    friend void swapping(X &x1, Y &y1);
    public:
      void get_number(){
        cout<<"Enter the number"<<endl;
        cin>>num1;
      }

      void display_number(){
        cout<<"The number is : "<<num1<<endl;
      }
};

class Y{
    int num2;
    friend void swapping(X &x1, Y &y1);
    public:
    void get_number(){
        cout<<"Enter the number : "<<endl;
        cin>>num2;
    }
    void display_number(){
        cout<<"The number is : "<<num2<<endl;
    }
};

void swapping(X &x1, Y &y1){
     int temp=x1.num1;
     x1.num1=y1.num2;
     y1.num2=temp;
}

int main() {
    X x;
    Y y;
    x.get_number();
    y.get_number();
    x.display_number();
    y.display_number();
    swapping(x,y);
    x.display_number();
    y.display_number();
return 0;
}