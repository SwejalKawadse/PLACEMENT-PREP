#include<bits/stdc++.h>
using namespace std;

class Dosti{
    int age;
    string name;
    public:

    Dosti(){}

    Dosti(int agee,string nam){
        age=agee;
        name=nam;
    }
    void get_data(int x,string y){
        age=x;
        name=y;
    }
    void print_data(){
        cout<<"The name of the friend is : "<<name<<endl<<"Age is : "<<age<<endl;
    }
};

int main() {
    Dosti govind;
    govind.get_data(21,"swejal");
    govind.print_data();

    Dosti *radhe=new Dosti;
    radhe->get_data(21,"swejal");
    radhe->print_data();

return 0;
}