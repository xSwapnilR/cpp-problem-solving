#include <iostream>
using namespace std;
int main () {
    int n,r;
    
    int factsum = 0;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    while (n != 0) {
int fact = 1;
    
    r = n%10;
    for (int i = 1; i <= r; i++) {
       if (r != 0 || r!= 1) {
        fact *= i;
       } else {
        return 1 ;
       }
    }
    n = n/10;
    factsum += fact;
    }
    
    cout<<"The sum of the factorial of all digit is "<<factsum<<endl;
    return 0;
}