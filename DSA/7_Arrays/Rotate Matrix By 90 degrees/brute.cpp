#include<bits/stdc++.h>
using namespace std;

         void rotate_matrix(vector<vector<int>>& matrix) {
            int n=matrix.size();
            vector<vector<int>> ans(n,vector<int>(n,0));
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    ans[j][n-i-1]=matrix[i][j];
                }
            }
       matrix=ans;
    }


int main() {
int m,n;
cout<<"Enter the dimension of square matrix : "<<endl;
cin>>n;

vector<vector<int>> matrix(n,vector<int>(n,0));
cout<<"enter the elements of the vector : "<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>matrix[i][j];
    }
}

cout<<"The matrix is : "<<endl;
for(auto it:matrix){
    for(auto x:it){
        cout<<x<<" ";
    }
    cout<<endl;
}

rotate_matrix(matrix);

cout<<"The matrix is : "<<endl;
for(auto it:matrix){
    for(auto x:it){
        cout<<x<<" ";
    }
    cout<<endl;
}

  
return 0;
}
