#include<iostream>
using namespace std;

const int Pen{ 10 }; 
const int Marker{ 20 };
const int Eraser{ 30 };
const int Rectangle{ 40 };
const int Circle{ 50 };
const int Ellipse{ 60 };

int main(){
    int tool(Marker);

    if(tool == Pen){
        cout<<"Active tool is pen"<<endl;
    }else if(tool == Marker){
        cout<<"Active tool is marker"<<endl;
    }else if(tool == Eraser){
        cout<<"Active tool is eraser"<<endl;
    }else if(tool == Rectangle){
        cout<<"Active tool is rectangle"<<endl;
    }else if(tool == Circle){
        cout<<"Active tool is circle"<<endl;
    }else if(tool == Ellipse){
        cout<<"Active tool is ellipse"<<endl;
    }

    cout<<"moving on"<<endl;

    return 0;
}