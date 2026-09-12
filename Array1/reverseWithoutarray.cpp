#include<iostream>
#include<vector>
using namespace std;

// void swap(int i, int j){
//         int temp = i;
//         i=j;
//         j=temp;

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
    for(int i=0; i<n/2; i++){
                int temp = v[i];
                v[i]=v[n-1-i];
                v[n-1-i]=temp;
    
}
    cout<<"Reverse array is : ";
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    }
