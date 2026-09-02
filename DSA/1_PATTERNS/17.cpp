#include<bits/stdc++.h>
using namespace std;

void func(int n){
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=(n-i);j++){
            cout<<"  ";
        }
        for(int j=1;j<=((2*i)-1);j++){
            if(j<=((2*i)-1)/2){
                cout<<ch<<" ";
                ch++;
            }
            else{
                cout<<ch<<" ";
                ch--;
            }
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