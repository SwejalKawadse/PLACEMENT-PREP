#include<bits/stdc++.h>
using namespace std;

class Example{
    static int count;
    public:
       Example(){
        cout<<"Constructor is called ."<<endl;
       }

       ~Example(){
        cout<<"Destructor is called ."<<endl;
       }

};

int main() {
    Example ex;
    cout<<"Entering for the inner block of content "<<endl;
    {
        Example one,two;
    }
    cout<<"Came back from example one and two . "<<endl;
return 0;
}