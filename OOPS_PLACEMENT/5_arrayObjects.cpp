#include<bits/stdc++.h>
using namespace std;

class Student{
    int roll_no;
    string name;
    public:
    void get_data();
    void print_data();
};

void Student::get_data(){
    cout<<"Enter roll no. "<<endl;
    cin>>roll_no;
    cout<<"Enter the name of the student : "<<endl;
    cin>>name;
}

void Student::print_data(){
    cout<<"Roll no. is "<<roll_no<<endl<<"Name is : "<<name<<endl;
}


int main() {
    Student sectionA[10];
    int n;
    cout<<"Enter the no. of student details to fill (limit 10)"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        sectionA[i].get_data();
    }
    for(int i=0;i<n;i++){
        sectionA[i].print_data();
    }
return 0;
}