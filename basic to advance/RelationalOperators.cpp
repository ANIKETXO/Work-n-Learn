#include<iostream>
using namespace std;
int main(){
    int number1 = (45);
    int number2 = (60);

    cout<<"Number1 : "<<number1<<endl;
    cout<<"Number2 : "<<number2<<endl;

    cout<<endl;
    cout<<"Comparing variables"<<endl;

    cout<<boolalpha;

    cout<<"Number1 > Number2 : "<<(number1 > number2)<<endl;
    cout<<"Number1 < Number2 : "<<(number1 < number2)<<endl;
    cout<<"Number1 == Number2 : "<<(number1 == number2)<<endl;
    cout<<"Number1 >= Number2 : "<<(number1 >= number2)<<endl;
    cout<<"Number1 <= Number2 : "<<(number1 <= number2)<<endl;
    cout<<"Number1!= Number2 : "<<(number1!= number2)<<endl;

    return 0;
}