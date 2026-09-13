#include<bits/stdc++.h>
using namespace std;

int Element(int r,int c){
    int n=r-1;
    int rr=c-1;
    int ans=1;
    for(int i=1;i<=rr;i++){
           ans*=(n-i+1);
           ans/=(i);
    }
    return ans;
}


vector<vector<int>> PascalTriangle(int n){
    vector<vector<int>>ans;

    for(int i=1;i<=n;i++){
           vector<int> eachRow;
        for(int j=1;j<=i;j++){
            int eachElement=Element(i,j);
              eachRow.push_back(eachElement);
        }
        ans.push_back(eachRow);
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