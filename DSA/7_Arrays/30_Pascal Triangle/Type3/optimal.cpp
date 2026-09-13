#include<bits/stdc++.h>
using namespace std;

vector<int> Print_Each_row(int n){
    vector<int> ans;
    int num=1;
    ans.push_back(num);
    for(int i=1;i<n;i++){
         num*=(n-i);
         num/=i;
         ans.push_back(num);
    }
    return ans;
}

vector<vector<int>> PascalTriangle(int n){
    vector<vector<int>>ans;

    for(int i=1;i<=n;i++){
        ans.push_back(Print_Each_row(i));
    }
    return ans;
}

int main() {
    int n;
    cout<<"Enter the size of the pascal triangle : "<<endl;
    cin>>n;

    vector<vector<int>> Triangle(n,vector<int> (n,0));
    Triangle=PascalTriangle(n);
    cout<<"The pascal triangle is : "<<endl;
    for(auto it:Triangle){
        for(auto x:it){
            cout<<x<<" ";
        }cout<<endl;
    }

return 0;
}