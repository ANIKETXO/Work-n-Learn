#include<iostream>
using namespace std;

int addNumber(int first_pram, int second_pram){
    int result = first_pram * second_pram;
    return result;
}
int main(){
    int first{3};//statement
    int second{4};

    int sum = first + second;


    cout<<"first number : "<<first<<endl;
    cout<<"second number : "<<second<<endl;
    cout<<"sum : "<<sum<<endl;
    sum = addNumber(25,7);
    cout<<"sum : "<<sum<<endl;
    sum = addNumber(50,100);
    cout<<"Sum : "<<sum<<endl;
    return 0;
}