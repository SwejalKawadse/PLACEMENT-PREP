#include<bits/stdc++.h>
using namespace std;

class Student{
    int rollNo;
    string name;
    int marks;
    public:
    void get_details(int x,string y,int z){
        rollNo=x;
        name=y;
        marks=z;
    }
    void print_details(){
        cout<<"The roll no is : "<<rollNo<<endl<<"The name is : "<<name<<endl<<"The marks are : "<<marks<<endl;
    }
};


int main() {
    int n;
    cout<<"Enter the no. of students u want : "<<endl;
    cin>>n;

    Student* s=new Student[n];
    Student* temp=s;
    int x,z;
    string y;
    for(int i=0;i<n;i++){
        cout<<"Enter the roll,name and marks of student :"<<endl;
        cin>>x>>y>>z;
        (*s).get_details(x,y,z);
        // s->get_details(x,y,z);
        s++;
    }
    for(int i=0;i<n;i++){
        (*temp).print_details();
        // temp->print_details();
        temp++;
    }

return 0;
}