#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cout<<"Enter 1st positive no. : ";
//     cin>>n;
//      int m;
//     cout<<"Enter 2nd positive no. : ";
//     cin>>m;
    
//     for(int i=n; i>=1; i--){
//         if(m%i==0 && n%i==0){
//             cout<<"HCF is "<<i;
//             break;
//         } else continue;
//         }
        
    
// }

void hcf(int x, int y){
         for(int i=min(x,y); i>=1; i--){
         if(x%i==0 && y%i==0){
             cout<<"HCF is "<<i;
             break;
         } else continue;
}}

int main(){
    int n;
    cout<<"Enter 1st positive no. : ";
    cin>>n;
     int m;
    cout<<"Enter 2nd positive no. : ";
    cin>>m;
    hcf(m,n);}