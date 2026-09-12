#include<iostream>
using namespace std;
int main(){
    char x;
    cout<<"Enter a character : ";
    cin>>x;
    if(64<x && x<91 && 96<x && x<123){
        cout<<x<<" is a alphabet.";

    }
    else{
        cout<<x<<" isn't a alphabet";
    }

}