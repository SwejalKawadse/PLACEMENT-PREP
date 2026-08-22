#include<bits/stdc++.h>
using namespace std;

class Movies{
        
       string movie_watched;
       static int count;

       public:
       void get_data_from_user();
       void print_data();
       static void track_count();

};

int Movies::count;

void Movies::get_data_from_user(){
    cout<<"Enter the movie that you have watched "<<endl;
    cin>>movie_watched;
    count++;
}

void Movies::print_data(){
    track_count();
    cout<<"The movie u have watched is "<<movie_watched<<endl;
}

void Movies::track_count(){
    cout<<"The number of movie watched is : "<<count<<endl;
}


int main() {
    Movies swejal,sakshi,srushti;
    swejal.get_data_from_user();
    swejal.print_data();
    Movies::track_count();

    sakshi.get_data_from_user();
    sakshi.print_data();

return 0;
}