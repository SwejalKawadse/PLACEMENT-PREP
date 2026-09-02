#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int n){
    int num=n;
    int temp=n;

    int digit_count=0;
    while(n>0){
        digit_count++;
        n=n/10;
    }
    double num_to_check=0;
    while(temp>0){
        int digit=temp%10;
        temp=temp/10;
        num_to_check+=(pow(digit,digit_count));
    }

return (num==num_to_check);
}

int main() {
    int n;
    cout<<"Enter the number to check for armstrong : "<<endl;
    cin>>n;
    cout<<"Is armstrong number : "<<isArmstrong(n)<<endl;
    
return 0;
}