#include<iostream>
using namespace std;
int main(){
    bool flag = true;
    int n, i=0,j=0, center;  string ch = " * ";
    cin>>n;
    cout<<endl;
    while (flag== true){
        if (n%2==0)
        {

            cout<<"invalid number";
            cout<<endl;
            cin>>n;
        }
        else{
            cout<<"valid number";
            cout<<endl;
            flag = false;
        }
        
    }
    cout<<endl;
    center = n/2;
    while(i<n){
        while (j<n)
        {
            if (i==0|| j== center|| i==n-1)
            {
                cout<<ch;
            }
            
            else
            {
                cout<<"   ";
            }
            j++;
            
        }
        cout<<endl;
        j = 0;
        i++;
        
    }
    
}