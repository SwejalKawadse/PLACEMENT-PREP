#include<bits/stdc++.h>
using namespace std;

int gcd(int n1,int n2){

    int mini=min(n1,n2);
    int ans=1;
    for(int i=1;i<=mini;i++){
         if(n1%i==0 && n2%i==0) ans=i;
    }
    return ans;
}

int main() {
    int n1,n2;
    cout<<"Enter two numbers : "<<endl;
    cin>>n1>>n2;
    cout<<"The gcd of two numbers is : "<<gcd(n1,n2)<<endl;

return 0;
}