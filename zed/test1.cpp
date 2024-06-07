#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
            string str;
            if(m<n){
                str ="lesser";
            }else if(m == n){
               str = "equal";
            }
            cout<<endl;
            cout<<str;
            return 0;
}
