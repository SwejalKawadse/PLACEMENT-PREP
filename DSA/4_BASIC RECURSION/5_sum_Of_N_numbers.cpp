#include<bits/stdc++.h>
using namespace std;

int Sum_of_n_numbers(int n){
    if(n==0) return 0;
    return n+Sum_of_n_numbers(n-1);
}

int sum_using_parameters(int sum,int n){
    if(n==0) return sum;
    sum=sum+n;
    return sum_using_parameters(sum,n-1);
}

int main() {
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    cout<<"The sum is : "<<Sum_of_n_numbers(n)<<endl;
    cout<<"sum using passing parameters : "<<sum_using_parameters(0,n);

return 0;
}