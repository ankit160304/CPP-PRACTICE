// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the no. of lines : ";
//     cin>>n;
//     for(int i = 1; i <= n; i++){
        
//             for(int k = n-i; k >0 ; k--){
//                 cout<<" ";
//             } for(int j = 1; j <=i ; j++){
//                 cout<<"*";
//             }   for(int l = i-1; l>0;l--){
//                 cout<<"*";
//             }

            
//             cout<<endl;
//         }

//         for(int m=n-1; m>0; m-- ){
//             for(int o = 1;o<=n-m  ;o++){
//                 cout<<" ";
//             } for(int p = 2*m-1; p>=1; p--){
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
         
//     }
                 


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of lines : ";
    cin>>n;
   int nsp=n-1;
    int nst=1;
    for(int i = 1; i<= 2*n-1; i++){
        for(int j = 1; j<=nsp; j++){
            cout<<" ";
        }
        if(i<=n-1) nsp--;
        else nsp++;
    for(int k = 1; k <= nst; k++){
        cout<<"*";
    }   
        if(i<=n-1) nst+=2;
        else nst-=2;
        cout<<endl;

}
}
                 