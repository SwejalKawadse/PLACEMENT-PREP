#include<bits/stdc++.h>
using namespace std;

void func(int n){

    for(int i=1;i<=((2*n)-1);i++){
        if(i<=n){
                for(int j=1;j<=i;j++){
                    cout<<"*";
                }
                for(int j=1;j<=((2*n)-(2*i));j++){
                    cout<<" ";
                }
                for(int j=1;j<=i;j++){
                    cout<<"*";
                }
                cout<<endl;
        }
        else{
           for(int j=1;j<=((2*n)-i);j++){
            cout<<"*";
           }
           for(int j=1;j<=((i-n)*2);j++){
            cout<<" ";
           }
           for(int j=1;j<=((2*n)-i);j++){
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