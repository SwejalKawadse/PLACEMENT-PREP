#include<bits/stdc++.h>
using namespace std;

class Employee{
    protected:
    string name;
    public:
    int employee_id;

    Employee(string x,int y){
        name=x;
        employee_id=y;
    }
    Employee(){
        name="Swejal";
        employee_id=1;
    }

    void emp_details();
};

void Employee::emp_details(){
    cout<<"The name of the employee is : "<<name<<endl<<"The id is : "<<employee_id<<endl;
}


class Manager : protected Employee{
    public:
    int teamSize;

    void manager_details();

    Manager(int team){
        teamSize=team;
    }

    Manager(){
        teamSize=5;
    }

};

void Manager :: manager_details(){
    cout<<"The team size is : "<<teamSize<<endl;
} 

class SeniorManager : public Manager{

    public:
       string department;

       SeniorManager(){
            department="DataScience";
       }

       void complete_details();
};

void SeniorManager ::complete_details(){
    cout<<"The name of the employee is : "<<name<<endl<<"The emp ID is : "<<employee_id<<endl<<"The team size is : "<<teamSize<<endl<<"The department is : "<<department<<endl;
}


int main() {
    Employee e("sakshi",23);
    e.emp_details();
    SeniorManager swejal;
    swejal.complete_details();
return 0;
}