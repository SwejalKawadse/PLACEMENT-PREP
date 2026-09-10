#include<bits/stdc++.h>
using namespace std;

         void setZeroes(vector<vector<int>>& matrix) {
            int m=matrix.size();
            int n=matrix[0].size();
            vector<int> row(m,-1);
            vector<int> col(n,-1);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
        
                if(matrix[i][j]==0){
                    row[i]=0;
                    col[j]=0;
        }
    }
}

   for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
        
                if(row[i]==0 || col[j]==0){
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
