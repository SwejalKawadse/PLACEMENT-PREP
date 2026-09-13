//  finding the value of the single element of the pascal triangle.

#include<bits/stdc++.h>
using namespace std;

long long factorial(int n){
    if(n==0 || n==1) return 1;

    return n*factorial(n-1);
}

int pascalTriangleI(int r, int c) {
   int n=r-1;
   int rr=c-1;

   int ans=1;
   ans*=factorial(n);
   ans/=(factorial(rr)*factorial(n-rr));
   return ans;
    }

int main() {
    int r,c;
    cout<<"Enter the value of the row and col : "<<endl;
    cin>>r>>c;
    cout<<"The element at particular row and column in a pascal triangle is : "<<pascalTriangleI(r,c);

return 0;
}