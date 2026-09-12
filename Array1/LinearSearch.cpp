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
     } int x;
     bool flag = true;
     cout<<"Enter the no. to find : ";
     cin>>x;
     for(int i=0; i<a; i++){
        if(arr[i]==x){
            cout<<"Element is found at the index no. "<<i;
            flag=false;
            break;    
           }   }
        if(flag==true){
            cout<<"404 element not found.";
     
     //cout<<"Sum is "<<sum;
    }
}