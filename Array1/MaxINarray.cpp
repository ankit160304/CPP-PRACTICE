#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the size of array : ";
    cin>>a;
    int arr[a];
     cout<<"Enter the numbers in array : ";
     for(int i=0; i<a; i++){
        cin>>arr[i];
     } int max=arr[0];
     for(int i=1; i<a; i++){
        if(arr[i]>max) max=arr[i];
     }
     cout<<"Max is "<<max;
      
}