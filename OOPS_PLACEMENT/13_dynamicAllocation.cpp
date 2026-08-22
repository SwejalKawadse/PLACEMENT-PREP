#include<bits/stdc++.h>
using namespace std;

class Deposit{

int principal;
int years;
float intrest;
double amount;

 public:

Deposit(){
    principal=0;
    years=0;
    intrest=0;
    amount=0;
}

 Deposit(int principal1,int years1,double intrest1){
        principal=principal1;
        years=years1;
        intrest=intrest1;
        amount=principal1;
        for(int i=0;i<years;i++){
            amount=amount*(1+intrest);
        }
 }

 Deposit(int principal1,int years1,int intrest1){
    principal=principal1;
    years=years1;
    intrest=double(intrest1)/100+1;
    amount=principal1;
    for(int i=0;i<years;i++){
            amount=amount*(intrest);
        }
 }

 void print_data(){
 cout<<"The amount for the principal "<<principal<<" years "<<years<<" and intrest rate "<<intrest<<" is : "<<amount<<endl;
 }


};


int main() {
    Deposit d1,d2;
    d1=Deposit(10000,2,5);
    d1.print_data();
    d2=Deposit(10000,2,0.05);
    d2.print_data();
return 0;
}