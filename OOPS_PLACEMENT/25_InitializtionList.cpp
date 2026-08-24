#include<bits/stdc++.h>
using namespace std;

class Numbers{
    int a;
    int b;
    public:
    // Numbers(int x,int y):a(x),b(y){
    // Numbers(int x,int y) : a(x+y),b(y){
    // Numbers(int x,int y) : a(x),b(x*y){
    // Numbers(int x,int y) : a(x*2),b(y){
    // Numbers(int x,int y) : a(x),b(a+y){
    // Numbers(int x,int y) : b(x),a(a+y){ gives error as a is declared first but initialized later coz should initialized in same sequence as declared.
        cout<<"The numbers are initialized : "<<endl<<"The num1 is : "<<a<<endl<<"The num 2 is : "<<b<<endl;
    }
};

int main() {
    Numbers num(1,2);
return 0;
}