#include<iostream>
using namespace std;
int main(){
    const int COUNT(10);
    size_t i(0);
    do{
        cout<<i<<" : I love C++"<<endl;
        ++i;
    }while(i<COUNT);
    return 0;
}