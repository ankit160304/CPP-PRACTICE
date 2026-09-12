#include<iostream>
using namespace std;

void digit(int a, int *x, int *y){
    *y = a%10;
    while(a>9){
         a= a/10;
         
    }
    *x = a;
    return;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int a,b;
    int *ptr1 = &a, *ptr2 = &b;
    digit(n,ptr1,ptr2);
    cout<<"First digit is "<<*ptr1<<" and last digit is "<<*ptr2;
}