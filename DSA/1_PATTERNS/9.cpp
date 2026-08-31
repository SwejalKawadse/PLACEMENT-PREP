#include<bits/stdc++.h>
using namespace std;

void func_up(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<"  ";
        }
        for(int j=1;j<=((2*i)-1);j++){
            cout<<"* ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        cout<<endl;
    }
}

void func_down(int n){
        for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<"  ";
        }
        for(int j=1;j<=10-(2*i)+1;j++){
            cout<<"* ";
        }
        for(int j=1;j<=i-1;j++){
            cout<<"  ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    func_up(n);
    func_down(n);
return 0;
}