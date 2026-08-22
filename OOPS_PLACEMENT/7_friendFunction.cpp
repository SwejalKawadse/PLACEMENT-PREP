#include<bits/stdc++.h>
using namespace std;

class License{
    int number;
    string name;

    public:

    friend bool check_expiry(License l1);

    void get_data(){
        cout<<"Enter the license number : "<<endl;
        cin>>number;
        cout<<"Enter the name : "<<endl;
        cin>>name;
    }

    void print_data(){
        cout<<"The license no. is "<<number<<endl<<"The name is : "<<name<<endl;
    }

};

bool check_expiry(License l1){
    if(l1.number<500) return true;
    else return false;
}

int main() {
    License l1;
    l1.get_data();
    cout<<"The license is valid(1/0) : "<<check_expiry(l1)<<endl;
    l1.print_data();
return 0;
}