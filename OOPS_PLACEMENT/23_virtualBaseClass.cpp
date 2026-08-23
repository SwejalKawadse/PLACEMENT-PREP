#include<bits/stdc++.h>
using namespace std;

class Vehicle{
public:
int vehicle_number;
string brand;
public:
void vehicles_data(int num,string brands){
   vehicle_number=num;
   brand=brands;
}
void print_vehicles(){
    cout<<"The vehicle number is : "<<vehicle_number<<endl<<"The brand of the vehicle is : "<<brand<<endl;
}
};

class Car : virtual public Vehicle{
    public:
    int doors_num;
    void car_data(int num){
        doors_num=num;
        }
        void print_car(){
            cout<<"The no of doors to the car are : "<<doors_num<<endl;
        }
};

class Bike : virtual public Vehicle{
    public:
    int engine_capacity;
    void bike_data(int capacity){
        engine_capacity=capacity;
    }
    void print_bike(){
        cout<<"The capacity of the engine is : "<<engine_capacity<<endl;
    }
};

class HybridVehicle : public Car, public Bike{
public:
    HybridVehicle(){
        cout<<"This is the example of virtual base class sirf ek baar hi variables aayege grandparent ke "<<endl;
    }

};

int main() {
    HybridVehicle h1;
    h1.vehicles_data(2,"ktm");
    h1.print_vehicles();
    h1.car_data(4);
    h1.print_car();
    h1.bike_data(3);
    h1.print_bike();
return 0;
}