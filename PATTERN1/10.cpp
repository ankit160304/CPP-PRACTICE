#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. : ";
    cin>>n;
    int j=1;
    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= i ; k++){
            cout<<j<<" ";
            j+=1;
        }
        cout<<endl;
    }
}