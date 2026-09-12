#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of vector : ";
    cin>>n;
    vector<int> v(n);
    // v.size()=n;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cout<<"Enter the value to know the last occurence in the given array or vector : ";
    int x,y=-1;
    cin>>x;
    // for(int i=0; i<n; i++){
    //     if(v[i] == x) y=i;
    //     // cout<<v[i]<<" ";
    // }
      for(int i=n-1; i>=0; i++){
        if(v[i] == x) y=i;
        // cout<<v[i]<<" ";
    }
    cout<<y;
}