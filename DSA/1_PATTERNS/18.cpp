#include<bits/stdc++.h>
using namespace std;

void func(int n){
    for(int i=1;i<=n;i++){
        char ch='A';
        ch+=(n-i);
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
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