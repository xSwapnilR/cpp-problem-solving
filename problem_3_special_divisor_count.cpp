#include <iostream>
using namespace std;
int main () {
      int num, r;
      int count = 0;
      int digitSum = 0; 
    do {
        
    cout<<"Enter a positive number: "<<endl;
    cin>>num;
     } while (num < 0);
   while (num != 0) {
    r = num % 10;
    digitSum = digitSum + r;
    num = num/10;
   } 
  
   
cout<<"Digit Sum is "<<digitSum<<endl;
for (int i = 0; i < num; i ++) {
    if (num % i == 0) {
        count++;
    } 
}
if (count % 2 == 0) {
    cout<<"EVEN"<<endl;
} else {
    cout<<"ODD"<<endl;
}
    
    return 0;
}