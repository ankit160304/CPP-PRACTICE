#include<iostream>
#include<vector>
using namespace std;

void swap(int &i, int &j){
        int temp = i;
        i=j;
        j=temp;
}

void reverse(vector<int>& a){
     for(int i=0; i<a.size()/2; i++){
                int temp = a[i];
                a[i]=a[a.size()-1-i];
                a[a.size()-1-i]=temp;
     }
     return;
}
void reversepart(int k, int b, vector<int>& a){
   while(k<=b){
    int temp=a[k];
    a[k]=a[b];
    a[b]=temp;
    k++;
    b--;
}}

void display(vector<int>& a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the number of vector : ";
    cin>>n;
    vector<int> v(n);
    cout<<("Enter the elemnts of array : ");
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int k ;
    cout<<"Enter the value of k : ";
    cin>>k;
    reversepart(n-k,n-1,v);
    display(v);
    int temp=v[n-1];
    for(int i=0;i<n;i++){
        int temp = v[i+1];
        v[temp]=v[i];
        
    }
    v[0]=temp;
    display(v);
}