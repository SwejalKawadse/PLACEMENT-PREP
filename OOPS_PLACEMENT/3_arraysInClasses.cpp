#include<bits/stdc++.h>
using namespace std;

class zoo{
 
    int visitor_id[50];
    string visitor_name[50];
    int counter;

    public:
    
    void counter_set_to_zero(){ counter=0; }
    void visitor();
    void print_details();

};

void zoo::visitor(){
    cout<<"Enter the id of the visitor : "<<endl;
    cin>>visitor_id[counter];
    cout<<"Enter the name of the visitor : "<<endl;
    cin>>visitor_name[counter];
    counter++;
}

void zoo::print_details(){
    for(int i=0;i<counter;i++){
        cout<<"The id of the visitor is : "<<visitor_id[i]<<endl<<"The name of the visitor is : "<<visitor_name[i]<<endl;
    }
}

int main() {
    zoo nagpur;
    nagpur.counter_set_to_zero();
    int n;
    cout<<"Enter the number of visitors of the day : "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        nagpur.visitor();
    }
    nagpur.print_details();
return 0;
}