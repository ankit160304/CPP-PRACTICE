#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive no. : ";
    cin>>n;
    int a=1;
    for(int i=0; i<=n; i++){
        cout<<a<<". ";
        a++;
        int curr =1;
        for(int j=0; j<=i; j++){
            cout<<curr<<" ";
            curr = curr*(i-j)/(j+1);
        }
        cout<<endl;
    }
}