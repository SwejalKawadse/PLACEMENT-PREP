#include<bits/stdc++.h>
using namespace std;

void func(int n){
    for(int i=1;i<=(2*n);i++){
       if(i<=(n)){
              for(int j=1;j<=(n-i+1);j++){
                cout<<"*";
              }
              for(int j=1;j<=((i-1)*2);j++){
                cout<<" ";
              }
              for(int j=1;j<=(n-i+1);j++){
                cout<<"*";
              }
              cout<<endl;
       }
       else{
         for(int j=1;j<=i-n;j++){
            cout<<"*";
         }
         for(int j=1;j<=((2*n)-(2*(i-n)));j++){
            cout<<" ";
         }
         for(int j=1;j<=i-n;j++){
            cout<<"*";
         }
         cout<<endl;
       }
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