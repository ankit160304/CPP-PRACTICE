#include<iostream>
#include<climits>
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
     int max2 = INT_MIN;
    //  for(int i=1; i<a; i++){
    //     if(arr[i]==max) continue;
    //     else if(max2 < arr[i]) max2=arr[i];
    //  }
    for(int i=1; i<a; i++){
        if(arr[i]!=max && arr[i]>max2) max2 = arr[i];
     }
     cout<<"Second Max is "<<max2;
      
} 