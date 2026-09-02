#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;

    
    int digit_count=0;
    while(n>0){
        digit_count++;
        n=n/10;
    }


    cout<<"The no. of digits in a number is : "<<digit_count<<endl;
return 0;
}