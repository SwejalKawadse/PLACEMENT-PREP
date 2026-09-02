#include<bits/stdc++.h>
using namespace std;

void print_1_to_n_backtrack(int n){

    if(n==0) return;

    print_1_to_n_backtrack(n-1);
    cout<<n<<" ";
}

void print_1_to_n(int i,int n){
    if(i>n) return ;
    cout<<i<<" ";
    print_1_to_n(i+1,n); 
}

int main() {
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    cout<<"Printing using the backtrack : "<<endl;
    print_1_to_n_backtrack(n);
    cout<<endl;
    cout<<"Printing using normal function : "<<endl;
    print_1_to_n(1,n);

return 0;
}