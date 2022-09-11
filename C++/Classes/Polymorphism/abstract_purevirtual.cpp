#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        //PURE VIRTUAL FUNCTION.
        virtual void display()=0; // do-nothing function
};

class CWHVideo : public CWH{
    float vidLength;
    public:
        CWHVideo(string s , float r, float vl) : CWH(s,r){
            vidLength = vl;
        }

        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings given are: "<<rating<<"/5"<<endl; 
            cout<<"Length of the video is: "<<vidLength<<" min"<<endl; 
        }
};  

class CWHText : public CWH{
    int word;
    public:
        CWHText(string s , float r, int wc) : CWH(s,r){
            word = wc;
        }
        void display(){
            cout<<"This is an amazing Text tutorial with title "<<title<<endl;
            cout<<"Ratings given are: "<<rating<<"/5"<<endl; 
            cout<<"Length of the text is: "<<word<<" words"<<endl; 
        }
};

int main(){
    string title;
    float rating , vl;
    int word;

    // For CWH video:
    title = "Django Tutorial";
    vl=12.30;
    rating = 4.5;
    CWHVideo Dj_tut(title, rating, vl);
    // Dj_tut.display();

    // For CWH Text:
    title = "Django Tutorial";
    word=1500;
    rating = 4.5;
    CWHText Dj_txt(title, rating, word);
    // Dj_txt.display();

    CWH * tuts[2];
    tuts[0]=&Dj_tut;
    tuts[1]=&Dj_txt;

    tuts[0] ->display();
    tuts[1] ->display();

    
    return 0;
}