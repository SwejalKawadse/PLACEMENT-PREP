// Euclidean algorithm :- 
// gcd(n1,n2) = gcd(n1-n2) provided n1>n2.
// whenever one of them becomes 0 the other one is the ans.
// Instead of doing subtractions multiple times we will do modulo which will reduce the problem

#include<bits/stdc++.h>
using namespace std;

int gcd(int n1,int n2){

    while(n1>0 && n2>0){
         if(n1>n2) n1=n1%n2;
         else n2=n2%n1;
    }
    if(n1==0) return n2;
    else return n1;
    
}

int main() {
    int n1,n2;
    cout<<"Enter two numbers : "<<endl;
    cin>>n1>>n2;
    cout<<"The gcd of two numbers is : "<<gcd(n1,n2)<<endl;

return 0;
}