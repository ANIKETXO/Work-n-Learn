#include<iostream>
#include<string>
using namespace std;
int main(){
    // cout<<"helllo c++14"<<endl;
    // int age{21};
    // cout<<"Age : "<<age<<endl;

    // cerr<<"error message: "<<endl;
    // clog<<"log message : somthing happened"<<endl;

    // int age1;
    // string name;
    // cout<<"please enter name and age"<<endl;
    // // cin>>name;
    // // cin>>age1;
    // cin>>name>>age1;

    // cout<<"hello "<<name<<" you are "<<age1<<"years old"<<endl;
    string full_name;
    int age3;
    cout<< "please enter name and age"<<endl;
    getline(cin, full_name);
    cin>>age3;
    cout<<"hello "<<full_name<<" you are "<<age3<<" years old"<<endl;

    return 0;
} 