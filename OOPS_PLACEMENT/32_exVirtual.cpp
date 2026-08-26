#include<bits/stdc++.h>
using namespace std;

class Media{
    protected:
string title;
int duration;
public:
       Media(string title,int duration){
        this->title=title;
        this->duration=duration;
       }

    virtual void play(){}
};

class Website : public Media{
    protected:
string url;
    public:
    Website(string x,int y,string z) : Media(x,y){
        url=z;
    }
    void play(){
        cout<<"The title of the website is : "<<title<<endl<<"The duration of the website is : "<<duration<<endl<<"The url is : "<<url<<endl;
    }
};

class Video : public Media{
    protected:
    float resolution;
    public:
      Video(string x,int y , float z) : Media(x,y){
        resolution=z;
      }
     void play(){
           cout<<"The title of the video is : "<<title<<endl<<"The duration of the video is : "<<duration<<endl<<"The resolution is : "<<resolution<<endl;
      }
};

class Audio : public Media{
    protected:
    string format;
    public:
    Audio(string x, int y,string z):Media(x,y){
        format=z;
    }
    void play(){
           cout<<"The title of the audio is : "<<title<<endl<<"The duration of the audio is : "<<duration<<endl<<"The format is : "<<format<<endl;
      }
};


int main() {
    Media* md;
    Media med("general media",10);
    Website web("amazon",5,"www.amazon.in");
    Video vdo("Dance",5,1080);
    Audio audi("Spotify",3,"frequency");
    med.play();
    web.play();
    vdo.play();
    audi.play();

    cout<<"\n\nBase ptr derived class : "<<endl;

    md=&web;
    md->play();

    md=&vdo;
    md->play();

    md=&audi;
    md->play();


    cout<<"\n\n Runtime Polymorphism using virtual function : "<<endl;
    md=&vdo;
    md->play();
return 0;
}