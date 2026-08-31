#include<bits/stdc++.h>
using namespace std;

template <typename T1 = int, typename T2 = string, typename T3 = double>
class Employee
{
    T1 id;
    T2 name;
    T3 salary;

public:
    Employee(T1 id, T2 name, T3 salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main(){
    Employee<> sakshi(1,"sakshi",10);
    sakshi.display();

    Employee<int,string,float> swejal(2,"Swejal",10000.50);
    swejal.display();
    return 0;
}
