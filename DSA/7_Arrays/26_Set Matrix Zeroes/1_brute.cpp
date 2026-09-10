#include<bits/stdc++.h>
using namespace std;

         void setZeroes(vector<vector<int>>& matrix) {
            int m=matrix.size();
            int n=matrix[0].size();
        for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        
        if(matrix[i][j]==0){
            for(int k=0;k<n;k++){
                if(matrix[i][k]==1)matrix[i][k]=-1;
            }
            for(int k=0;k<m;k++){
               if(matrix[k][j]==1) matrix[k][j]=-1;
            }
        }
    }
}

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(matrix[i][j]==-1){
            matrix[i][j]=0;
        }
    }
}

    }


int main() {
int m,n;
cout<<"Enter the row and column size of the matrix : "<<endl;
cin>>m>>n;

vector<vector<int>> matrix(m,vector<int>(n,0));
cout<<"enter the elements of the vector : "<<endl;
for(int i=0;i<m;i++){
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
setZeroes(matrix);

cout<<"The matrix is : "<<endl;
for(auto it:matrix){
    for(auto x:it){
        cout<<x<<" ";
    }
    cout<<endl;
}

  
return 0;
}
