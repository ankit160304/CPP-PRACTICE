#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the no. of students : ";
    cin>>a;
    int arr[a];
     cout<<"Enter the marks of students : ";
     for(int i=0; i<a; i++){
        cin>>arr[i];
     }
      cout<<"The roll no. of the students whose marks is less than 35 are : ";
     for(int i=0; i<a; i++){ 
        if(arr[i]<35)
        cout<<i<<" ";
     }
}