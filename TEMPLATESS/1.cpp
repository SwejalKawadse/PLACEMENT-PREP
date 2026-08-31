#include<bits/stdc++.h>
using namespace std;

template<class t>
class Square{
  t side;
  public:
     Square(t side){
        this->side=side;
     }
     void area(){
        cout<<"The area of the square is : "<<(side*side)<<endl;
     }
};

int main() {
    Square<float> s(1.5);
    s.area();
return 0;
}