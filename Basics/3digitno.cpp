#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n<1000 && n>99){
        cout<<"it's a 3 digit number.";
    }    else{
            cout<<"it's not a 3 digit number.";
        }
    
}