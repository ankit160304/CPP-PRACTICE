#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of vector : ";
    cin>>n;
    vector<int> v(n),v1(n);
    // v.size()=n;
    cout<<("Enter the elemnts of array : ");
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        v1[n-1-i]=v[i];
    }
    cout<<"Reverse array is : ";
    for(int i=0; i<n; i++){
        cout<<v1[i]<<" ";
    }
}