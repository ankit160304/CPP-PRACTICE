#include<iostream>
using namespace std;
long long f(int x){
    if(x==0 || x==1) return 1;
    else{
        int a=1;
        for(int i=1; i <= x; i++){
            a*=i;
        }
        return a;
    }
}

long long c(long long x, long long y){
      return f(x)/(f(y)*f(x-y));
}

int p(int x, int y){
      return f(x)/(f(x-y));
}

int main(){
    int n;
    cout<<"Enter a positive no. : ";
    cin>>n;
    int a=1;
    cout<<"Pascal triangle : "<<endl;
    for(int i=0; i<=n; i++){
        cout<<a<<". ";
        a++;
        for(int j=0; j<=i; j++){
            cout<<c(i,j)<<" ";
        }
        cout<<endl;
    }
}