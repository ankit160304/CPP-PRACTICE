// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the no. : ";
//     cin>>n;
//    // int j=1;
//     for(int i = 1; i <= n; i++){
//         if(i%2!=0){
//             for(int k = 1; k <= i ; k++){
//          if(k%2!=0)   cout<<"1"<<" ";
//          else cout<<"0"<<" ";
//          //   j+=1;
//         }
//     }
//     else{
//          for(int k = 1; k <= i ; k++){
//          if(k%2!=0)   cout<<"0"<<" ";
//          else cout<<"1"<<" ";
//     }
// }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. : ";
    cin>>n;
   // int j=1;
    for(int i = 1; i <= n; i++){
        
            for(int k = 1; k <= i ; k++){
         if((i+k)%2==0)   cout<<"1"<<" ";
         else cout<<"0"<<" ";
            }
            cout<<endl;
        }
    }