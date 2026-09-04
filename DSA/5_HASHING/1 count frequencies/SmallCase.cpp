#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout<<"Enter the string : "<<endl;
    cin>>s;
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    int q;
    cout<<"Enter no of queries : "<<endl;
    cin>>q;
    while(q--){
            char number;
            cout<<"Enter number : "<<endl;
            cin>>number;
            cout<<"Appears no. of times : "<<hash[number-'a']<<endl;
    }
return 0;
}