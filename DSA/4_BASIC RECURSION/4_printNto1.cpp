#include<bits/stdc++.h>
using namespace std;

void NormalFunction(int n){
    if(n==0) return;

    cout<<n<<" ";
    NormalFunction(n-1);
}

void N_to_1_backtrack(int i,int n){
    if(n<i) return;
    N_to_1_backtrack(i+1,n);
    cout<<i<<" ";

}

int main() {
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    cout<<"Printing using the backtrack : "<<endl;
    N_to_1_backtrack(1,n);
    cout<<endl;
    cout<<"Printing using normal function : "<<endl;
    NormalFunction(n);
return 0;
}