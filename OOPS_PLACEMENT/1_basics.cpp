/* I will be implementing the class to collect the information if they are applicable to a scehem and print the data : */


#include<bits/stdc++.h>
using namespace std;

class People{
    private:
    float bankBalance;
    public:
    string name;
    long long person_id;
    string village;

    void enter_details(float BankBalance);
    void check_details(){
        cout<<"The name of the person is : "<<name<<endl<<"The person_id is : "<<person_id<<endl<<"The village of the person is : "<<village<<endl<<"The balance of the person is : "<<bankBalance<<endl;
    }

};

void People::enter_details(float BankBalance){
    bankBalance=BankBalance;
}

int main() {
    People swejal;
    swejal.enter_details(10000);
    swejal.name="SWEJAL JITENDRA KAWADSE";
    swejal.person_id=660330680682;
    swejal.village="KATOL";

    swejal.check_details();
return 0;
}