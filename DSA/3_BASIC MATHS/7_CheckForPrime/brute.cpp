#include<bits/stdc++.h>
using namespace std;

bool PrimeCheck(int n){
    int cnt=0;
    for(int i=1;i<=n;i++){
          if(n%i==0){
            cnt++;
          }
    }
    
    return (cnt==2);
}

int main() {
    int n;
    cout<<"enter the number : "<<endl;
    cin>>n;
    cout<<"Prime number : "<<PrimeCheck(n)<<endl;
    cout<<endl;
return 0;
}