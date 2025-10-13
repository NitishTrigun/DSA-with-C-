#include<iostream>
#include<math.h>
using namespace std;
int add(int a, int b){
    return a+b;
}
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Sum of two number is:"<<add(a,b);
    return 0;
}