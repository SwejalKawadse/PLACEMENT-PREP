#include<bits/stdc++.h>
using namespace std;

void printDivisors(int n){
    for(int i=1;i<=n;i++){
         if(n%i==0) cout<<i<<" ";
    }
}

int main() {
    int n;
    cout<<"Enter the number u want to print divisors of : "<<endl;
    cin>>n;
    cout<<"All the divisors of the number are : "<<endl;
    printDivisors(n);
    cout<<endl;
return 0;
}