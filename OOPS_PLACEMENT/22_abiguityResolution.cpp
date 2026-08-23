#include<bits/stdc++.h>
using namespace std;

class dance{
public:
int hours=1;
void show(){
    cout<<"The hours I dance is : "<<hours<<endl;
}
};

class singing{
public:
int hours=1;
void show(){
    cout<<"The hours I sing is : "<<hours<<endl;
}
};

class study: public dance,public singing{
public:
// int hours=6;
int study_hours=8;
void show(){
    cout<<"Calling in derived the base class : "<<singing::hours<<endl;
    cout<<"The hours I study are : "<<study_hours<<endl;
}
};

int main() {
    study swejal;
    cout<<"No. of hrs I dance : "<<swejal.dance::hours<<endl;
    cout<<"No. of hrs I sing : "<<swejal.singing::hours<<endl;
    swejal.show();
return 0;
}