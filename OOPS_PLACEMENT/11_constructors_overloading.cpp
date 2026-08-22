#include<bits/stdc++.h>
using namespace std;

class student{
    string name;
    int roll_no;
    int marks;

    public:

    static int count;

    student(){
        name="Swejal";
        roll_no=count;
        marks=90;
    }
    student(string name1){
        name=name1;
        roll_no=count;
        marks=80;
    }
    student(string name1,int roll){
        name=name1;
        roll_no=roll;
        marks=85;
    }
    student(string name1,int roll,int marks1){
        name=name1;
        roll_no=roll;
        marks=marks1;
    }

    

    void print_data(){
        cout<<"The name of the student is : "<<name<<endl<<"The roll no is : "<<roll_no<<endl<<"The marks are "<<marks<<endl;
    }
};

int student::count=0;


int main() {
    student swejal;
    student sakshi("sakshi");
    student srushti("srushti",5);
    student anushka("anushka",7,78);
    swejal.print_data();
    sakshi.print_data();
    srushti.print_data();
    anushka.print_data();

return 0;
}