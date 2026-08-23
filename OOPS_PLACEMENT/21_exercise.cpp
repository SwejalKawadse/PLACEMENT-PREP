#include<bits/stdc++.h>
using namespace std;

class SimpleCalculator{
    protected:
    int a , b;
    public:

    SimpleCalculator(){
        a=5;
        b=2;
    }

    SimpleCalculator(int x,int y){
        a=x;
        b=y;
    }

    void display_simple(){
        cout<<"The sum is : "<<a+b<<endl<<"Subtraction is : "<<a-b<<endl<<"Multiplication is : "<<a*b<<endl<<"Division is : "<<a/b<<endl;
    }

};

class ScientificCalculator{
    protected:
    float theta;
    public:
    ScientificCalculator(){
        theta=45*M_PI/180;
    }
    ScientificCalculator(float degree){
        theta=degree*M_PI/180;
    }

    void display_scientific(){
        cout<<"The sine is : "<<sin(theta)<<endl<<"Cosine is : "<<cos(theta)<<endl<<"Tan is : "<<tan(theta)<<endl<<"Cosec is : "<<(1/sin(theta))<<endl;
    }

};

class HybridCalculator : public SimpleCalculator , public ScientificCalculator{

    public :
    void display_hybrid(){
        cout<<"Addition : "<<a+b<<endl<<"Subtraction : "<<a-b<<endl<<"Multiplication : "<<a*b<<endl<<"Division : "<<a/b<<endl<<"Sine : "<<sin(theta)<<endl<<"Cosine : "<<cos(theta)<<endl<<"Tan : "<<tan(theta)<<endl<<"Cosec is : "<<(1/sin(theta))<<endl;
    }
};

int main() {
    ScientificCalculator s(90);
    s.display_scientific();
    HybridCalculator h1;
    h1.display_hybrid();
return 0;
}