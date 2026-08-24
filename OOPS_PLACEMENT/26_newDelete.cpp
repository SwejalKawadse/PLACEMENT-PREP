#include<bits/stdc++.h>
using namespace std;

int main() {
    int* x = new int(20);
    cout<<*(x)<<endl;

    int* arr = new int[5];
    arr[0]=2;
    arr[1]=4;
    arr[2]=6;
    arr[3]=8;
    arr[4]=10;
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl<<*(arr+2)<<endl<<*(arr+3)<<endl;

    delete[] arr;
    delete x;

    cout<<*x<<endl;
    cout<<*(arr)<<endl;

return 0;
}