#include<bits/stdc++.h>
using namespace std;

void func(int n){
    
    for(int i=1;i<=n;i++){
         for(int j=1;j<=(n-i+1);j++){
              cout<<j<<" ";
         }
         cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    func(n);
return 0;
}