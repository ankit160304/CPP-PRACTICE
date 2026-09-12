#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    cout<<"Enter 3rd number : ";
    cin>>c;
    if(a==b && b==c){
       cout<<"All numbers are same.";
    }
    else{
    if(a>b && a>c){
        cout<<a<<" is a greatest number.";
    }
    else{
       if(b>a && b>c){
         cout<<b<<" is a greatest number.";
       }
       else{
         cout<<c<<" is a greatest number.";
       }
     }
    }  
}

// #include<iostream>
//  using namespace std;
// int main() {
//     int x,y,z;
//     cout<<"Enter the 1st,2nd & 3rd no. : ";
//     cin>> x >> y >> z;
//     if(x==y && y==z){
//         cout<<"All numbers are same.";
//     }
//     if(x>y && x>z){
//         cout<<x<<" is the largest number.";
//     }
//      if(z>y && z>x){
//         cout<<z<<" is the largest number.";
//      }
//      if(y>x && y>z){
//         cout<<y<<" is the largest number.";
    
//      }
// }