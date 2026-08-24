#include<bits/stdc++.h>
using namespace std;

class Employee{
     string employeeName;
     int employeeId;
     public:
     Employee(string name,int id){
           employeeName=name;
           employeeId=id;
           cout<<"The constructor of employee is called. "<<endl;
     }
     void print_emp_details(){
        cout<<"The name of the employee is : "<<employeeName<<endl<<"The id of the employee is : "<<employeeId<<endl;
     }

};

class Department{
    string departmentName;
    public:

    Department(string name){
        departmentName=name;
        cout<<"The constructor of department is called . "<<endl;
    }

    void print_dept_details(){
        cout<<"The department is : "<<departmentName<<endl;
    }


};

class Manager : public Employee , public Department{
    int teamSize;
    public:
    Manager(string a,int b, string c,int d) : Employee(a,b),Department(c){
        teamSize=d;
        cout<<"the constructor of the manager is called . "<<endl;
    }
};

int main() {
    Manager swejal("sakshi",1,"mechanical",5);
    swejal.print_dept_details();
    swejal.print_emp_details();
    
return 0;
}