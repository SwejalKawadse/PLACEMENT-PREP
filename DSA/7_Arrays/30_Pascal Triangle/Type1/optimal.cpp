//  finding the value of the single element of the pascal triangle.

#include<bits/stdc++.h>
using namespace std;


int pascalTriangleI(int r, int c) {
   int n=r-1;
   int rr=c-1;

   int ans=1;
  for(int i=1;i<=rr;i++){
    ans*=(n-i+1);
    ans/=(i);
  }
return ans;

    }

int main() {
    int r,c;
    cout<<"Enter the value of the row and col : "<<endl;
    cin>>r>>c;
    cout<<"The element at particular row and column in a pascal triangle is : "<<pascalTriangleI(r,c);

return 0;
}