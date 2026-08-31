#include<bits/stdc++.h>
using namespace std;

void func(int n){
    char ch='A';
    for(int i=1;i<=n;i++){
         for(int j=1;j<=i;j++){
              cout<<char(ch+i-1)<<" ";
         }
         cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    cout<<endl;
    func(n);
return 0;
}