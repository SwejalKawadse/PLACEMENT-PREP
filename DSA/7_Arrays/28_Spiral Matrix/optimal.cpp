#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int top=0;
        int left=0;
        int bottom=matrix.size()-1;
        int right=matrix[0].size()-1;

        while(left<=right && top<=bottom){

            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;

            for(int i=top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;

            // agar pehle hi top aur bottom same place pe ho aur upar ki conditions ki wajah se top ab bottom se ek place aage gaya ho to..
            if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }


        // Agar right column traverse karne ke baad left > right ho gaya, iska matlab koi left column bacha hi nahi hai, isliye left column ko dobara traverse nahi karna.
            if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }

        return ans;
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

vector<int> ans;
ans=spiralOrder(matrix);
for(auto it:ans){
    cout<<it<<" ";
}
cout<<endl;

return 0;
}
