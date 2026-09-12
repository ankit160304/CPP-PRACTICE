// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of vector : ";
//     cin>>n;
//     vector<int> v(n);
//     // v.size()=n;
//     cout<<("Enter the array element : "); 
//     for(int i=0; i<n; i++){
//         cin>>v[i];
//     } 
//     int x;
//     cout<<"Enter the value of sum : ";
//     cin>>x;
//     for(int i=0; i<n-1;i++){
//         for(int j=i+1; j<n ; j++){
//             if(v[i]+v[j]==x)  cout<<"("<<i<<","<<j<<") ";
//         }
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int n,target, arr[n];
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array : ";
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    cout<<"Enter the value of target : ";
    cin>>target;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n; j++){
            if((arr[i]+arr[j] )== target){
                cout<<"["<<i<<","<<j<<"] ";
            }
        }
    }
}