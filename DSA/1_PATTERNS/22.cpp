#include<bits/stdc++.h>
using namespace std;

void func(int n){
    for(int i=1;i<=((2*n)-1);i++){
       if(i<=n){
        int temp=n;
            for(int j=1;j<=(i-1);j++){
                cout<<temp<<" ";
                temp--;
            }
            for(int j=1;j<=((2*n)-(2*i)+1);j++){
                cout<<(n-i+1)<<" ";
            }
            for(int j=1;j<=(i-1);j++){
                temp++;
                cout<<temp<<" ";
            }
            cout<<endl;
       }
       else{
        int temp=n;
        for(int j=1;j<=((2*n)-i-1);j++){
            cout<<temp<<" ";
            temp--;
        }
        for(int j=1;j<=((i-n)*2)+1;j++){
            cout<<i-n+1<<" ";
        }
        for(int j=1;j<=((2*n)-i-1);j++){
            temp++;
            cout<<temp<<" ";
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