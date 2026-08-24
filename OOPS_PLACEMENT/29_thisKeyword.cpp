#include<bits/stdc++.h>
using namespace std;

class Vegetables{

    int types;
    string to_cook;

    public:
    void get_data(int types,string to_cook){
        this->types=types;
        this->to_cook=to_cook;
    }

    void print_data(){
        cout<<"The types of veges present are : "<<types<<endl<<"The one to cook today is : "<<to_cook<<endl;
    }
};


int main() {
    Vegetables green;
    green.get_data(5,"palak");
    green.print_data();

    cout<<&green<<endl;

return 0;
}