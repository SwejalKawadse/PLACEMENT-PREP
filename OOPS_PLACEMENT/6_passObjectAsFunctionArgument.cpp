#include<bits/stdc++.h>
using namespace std;

class Complex{
      int real;
      int imaginary;

      public:

      void get_complex_number();
      void print_complex_number();
      void sum_numbers(Complex,Complex);
};

void Complex::get_complex_number(){
        cout<<"Enter the real part : "<<endl;
        cin>>real;
        cout<<"Imaginary part : "<<endl;
        cin>>imaginary;
}

void Complex::print_complex_number(){
    cout<<"The number is : "<<real<<"+"<<imaginary<<"i"<<endl;
}

void Complex::sum_numbers(Complex a,Complex b){
         real=a.real+b.real;
         imaginary=a.imaginary+b.imaginary;
}

int main() {
    Complex c1,c2,c3;
    c1.get_complex_number();
    c2.get_complex_number();
    c1.print_complex_number();
    c2.print_complex_number();
    c3.sum_numbers(c1,c2);
    c3.print_complex_number();
return 0;
}