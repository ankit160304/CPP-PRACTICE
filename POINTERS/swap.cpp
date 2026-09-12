#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
     cout<<"After Swapping : a = "<<*a<<" and b = "<<*b<<endl;
}
int main(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"Before Swapping : a = "<<a<<" and b = "<<b<<endl;
    swap(&a,&b);
}