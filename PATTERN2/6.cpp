// n in center

#include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the no. of lines : ";
//     cin>>n;
//     for(int i=1; i<=2*n-1; i++){
//         for(int j =1; j<=2*n-1;j++){
//           int a=i;
//           int b=j;
//           if(i>n) a=2*n-i;
//           if(b>n) b=2*n-j;
//            if(a<b) cout<<a<<" ";
//             else cout<<b<<" ";
//         }
//         cout<<endl;
//     }
//     }
                 



// 1 in center


using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of lines : ";
    cin>>n;
    for(int i=1; i<=2*n-1; i++){
        for(int j =1; j<=2*n-1;j++){
          int a=i;
          int b=j;
          if(i>n) a=2*n-i;
          if(b>n) b=2*n-j;
           if(a<b) cout<<n-a+1<<" ";
            else cout<<n-b+1<<" ";
        }
        cout<<endl;
    }
    }
                 