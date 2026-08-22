#include<bits/stdc++.h>
using namespace std;

class Zoo{
     public:
     int zoo_id;
     int animals;
     Zoo(){
        zoo_id=0;
        animals=0;
     }

     Zoo(int id,int animal){
        zoo_id=id;
        animals=animal;
     }

     Zoo(int id){
        zoo_id=id;
        animals=5;
     }

     void print_data(){
        cout<<"The zoo id is : "<<zoo_id<<endl<<"The animals present there are : "<<animals<<endl;
     }
};

class Elephant : public Zoo{
   public:
   int total;
   Elephant(int id,int tot){
    zoo_id=id;
    total=tot;
   }
};

int main() {
    Zoo nagpur(1,3);
    nagpur.print_data();
    Elephant chuchu(2,4);
    chuchu.print_data();

return 0;
}