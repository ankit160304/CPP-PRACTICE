#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the size of array : ";
    cin>>a;
    int arr[a];
     cout<<"Enter the elements of array : ";
     for(int i=0; i<a; i++){
        cin>>arr[i];
     } int x,count=0;
     //bool flag = true;
     cout<<"Enter the no. to check  : ";
     cin>>x;
     for(int i=0; i<a; i++){
        if(arr[i]>x){
            count++;
           }   }
    cout<<count<<" no. is greater than "<<x<<" in the given array.";
}