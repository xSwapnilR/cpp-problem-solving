#include <iostream>
using namespace std;
int main () {
    int num,r;
    int evensum = 0, oddsum = 0;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    while (num !=0) {
        r = num %10 ;
        if (r % 2 == 0) {
            evensum += r;
        } else {
            oddsum += r;
        }
        num = num /10;
    }
    if ((evensum- oddsum) % 3 == 0) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

    return 0;
}