#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of lines : ";
    cin>>n;
    for(int o =1 ; o<= 2*n-1 ; o++){
        cout<<"*";
    }
    cout<<endl;
    for(int i = 1; i <= n-1; i++){
        
            for(int k = n-i; k >= 1 ; k--){
                cout<<"*";
            } for(int j = 1; j <=2*i-1 ; j++){
                cout<<" ";
                }   
               for(int l = n-i; l>=1;l--){
                cout<<"*";
            }
        cout<<endl;
    }
}
                 