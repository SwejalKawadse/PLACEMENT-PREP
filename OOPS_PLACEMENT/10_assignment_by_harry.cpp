#include<bits/stdc++.h>
using namespace std;

class Distance{
    int x;
    int y;

    friend float Distance_betn_2_pts(Distance,Distance);

    public:
    Distance(int a,int b);

};

Distance::Distance(int a,int b){
    x=a;
    y=b;
}

float Distance_betn_2_pts(Distance d1,Distance d2){
    float ans=((d1.x-d2.x)*(d1.x-d2.x))+((d1.y-d2.y)*(d1.y-d2.y));
    return sqrt(ans);
}

int main() {
    Distance d1(1,1);
    Distance d2(2,2);
    cout<<Distance_betn_2_pts(d1,d2);

return 0;
}