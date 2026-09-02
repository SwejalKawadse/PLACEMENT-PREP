#include<bits/stdc++.h>
using namespace std;

void printNameNTimes(int n){
    if(n==0) return;
    cout<<"Radhe Radhe "<<endl;
    printNameNTimes(n-1);
}

int main() {
int n;
cout<<"Enter the number of times u want to print the name : "<<endl;
cin>>n;
printNameNTimes(n);
return 0;
}