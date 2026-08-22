#include<bits/stdc++.h>
using namespace std;

class Zoo{
    int animals;
    public:
    Zoo(){}

    Zoo(int animal){
        animals=animal;
    }

    Zoo(Zoo &x){
        animals=x.animals;
    }

    void display(){
        cout<<"The number of animals in zoo are : "<<animals<<endl;
    }

};

int main() {
   Zoo nagpur(5);
   nagpur.display();

   Zoo mumbai(10);

   Zoo pune(mumbai);
   pune.display();

return 0;
}