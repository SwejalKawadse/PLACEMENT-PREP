#include<bits/stdc++.h>
using namespace std;

class Subjects{
    int sub1;
    int sub2;
    int sub3;
    public:
    Subjects(int dsa){
        sub1=dsa;
        sub2=40;
        sub3=90;
    }
    Subjects(int dsa,int development,int cpp=40){
        sub1=dsa;
        sub2=development;
        sub3=cpp;
    }

    void print_details(){
        cout<<"The study of the dsa completed is : "<<sub1<<endl<<"Development : "<<sub2<<endl<<"OOPS : "<<sub3<<endl;
    }
};

int main() {
       Subjects swejal(60,18);
       swejal.print_details();
return 0;
}