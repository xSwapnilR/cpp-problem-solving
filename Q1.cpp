#include <iostream>
using namespace std;
int main () {
    int num1, num2;
    cout<<"Enter the value of num1: "<<endl;
    cin>>num1;
    cout<<"Enter the value of num2: "<<endl;
    cin>>num2;
    int a ;
    if (num1 <num2) {
        a = num1;

    }
    else {
        a = num2;
    }
    for (int i = a; i >=1; i--) {
     if(  num1 % i==0 && num2%i ==0 ) {
    cout<<"GCD is "<<i<<endl;
    break;
     } 
    }
       
     
    
    return 0;
}