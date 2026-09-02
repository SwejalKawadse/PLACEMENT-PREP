#include<bits/stdc++.h>
using namespace std;

void func(int n){
   
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            for(int j=1;j<=((2*n)-(2*i));j++){
                cout<<"  ";
            }
            for(int j=1;j<=i;j++){
                cout<<(i-j+1)<<" ";
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