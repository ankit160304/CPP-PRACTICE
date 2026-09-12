#include<iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"Enter the CP :  ";
    cin>>x;
    cout<<endl<<"Enter the SP : ";
    cin>>y;
    if(x==y){
        cout<<"Not profit nor loss.";
    }
    else{
    if(x<y){
        cout<<"Profit : "<<y-x;
    }
        else{
        cout<<"Loss : "<<x-y;
        }
    }
}