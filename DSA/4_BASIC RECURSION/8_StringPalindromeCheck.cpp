#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int i,string &s){
     int n=s.size()-1;

     if(i>(n/2)) return true;

     if(s[i]!=s[n-i]) return false;
     return isPalindrome(i+1,s);
}

int main() {
    string s;
    cout<<"Enter the string to check palindrome : "<<endl;
    cin>>s;
    cout<<"String being palindrome is : "<<isPalindrome(0,s)<<endl;
return 0;
}