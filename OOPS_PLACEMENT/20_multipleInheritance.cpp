#include<bits/stdc++.h>
using namespace std;

class mummy{
protected:
      string hairs;
public: 
      mummy(){
           hairs="brown";
      }

};

class papa{
protected:
       string skin_color;
public: 
      papa(){
        skin_color="fair";
      }


};

class baccha : public mummy , public papa{
protected:
      string eyes;
public: 
      baccha(){
        eyes="black";
      }
     baccha(string eye_color){
        eyes=eye_color;
     }

     void show(){
        cout<<"The child will have "<<eyes<<" eyes , "<<skin_color<<" skin , "<<hairs<<" hairs"<<endl;
     }

};

int main() {
    baccha cutu;
    cutu.show();
return 0;
}