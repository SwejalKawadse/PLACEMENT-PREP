#include<bits/stdc++.h>
using namespace std;

void func(int n){
    bool flag=1;
    
    for(int i=1;i<=n;i++){
        if(i%2==1) flag=1;
        else flag=0;
        for(int j=1;j<=i;j++){
            cout<<flag<<" ";
            flag=1-flag;
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