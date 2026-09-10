#include<bits/stdc++.h>
using namespace std;

         void setZeroes(vector<vector<int>>& matrix) {
            int m=matrix.size();
            int n=matrix[0].size();
            int col0=1;
        
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(matrix[i][j]==0){
                        matrix[i][0]=0;

                        if(j!=0) matrix[0][j]=0;
                        else col0=0;
                    }
                }
            }

            for(int i=1;i<m;i++){
                for(int j=1;j<n;j++){
                    if(matrix[i][0]==0 || matrix[0][j]==0){
                        matrix[i][j]=0;
                    }
                }
            }

            if(matrix[0][0]==0){
                for(int i=1;i<m;i++){
                    matrix[0][i]=0;
                }
            }

            if(col0==0){
                for(int i=0;i<n;i++){
                    matrix[i][0]=0;
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
