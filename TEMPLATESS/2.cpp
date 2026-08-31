#include<bits/stdc++.h>
using namespace std;

template<typename t1,typename t2>

class Area{
    t1 length;
    t2 breadth;
    public:
    Area(t1 length,t2 breadth){
        this->length=length;
        this->breadth=breadth;
    }

    void area(){
        cout<<"The area is : "<<(length*breadth)<<endl;
    }
};

int main() {
    Area<int,float> a1(4,5.2);
    a1.area();
return 0;
}