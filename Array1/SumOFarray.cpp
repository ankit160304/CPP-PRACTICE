#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the no. of numbers to add : ";
    cin>>a;
    int arr[a];
     cout<<"Enter the numbers : ";
     for(int i=0; i<a; i++){
        cin>>arr[i];
     } int sum = 0;
     for(int i=0; i<a; i++){
        sum+=arr[i];
     }
     cout<<"Sum is "<<sum;
      
}