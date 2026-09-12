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

long long c(int x, int y){
      return f(x)/(f(y)*f(x-y));
}

long long p(int x, int y){
      return f(x)/(f(x-y));
}

int main(){
    int a,b;
    cout<<"Enter a positive no. : ";
    cin>>a;
    cout<<"Enter a positive no. which are less than above no. : ";
    cin>>b;
    cout<<"Permutation : "<<p(a,b)<<endl;
    cout<<"Combination : "<<c(a,b)<<endl;
    
}