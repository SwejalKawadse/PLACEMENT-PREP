#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
    int temp=n;
    int rev_num=0;
     while(n>0){
      int digit=n%10;
      n=n/10;
      rev_num=(rev_num*10)+digit;
     }
     return (temp==rev_num);
}

int main() {
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
   cout<<"The integer given is palindrome : "<<isPalindrome(n)<<endl;
return 0;
}