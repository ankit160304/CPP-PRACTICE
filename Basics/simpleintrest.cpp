#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the value of Principal, Rate & Time : ";
    int si,p,t,r;
    cin>>p>>t>>r;
    cout<<"Simple Intrest : "<<(p*r*t)/100;
}