#include <iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the size: "<<endl;
    cin>>n;
     int arr[n];
     cout<<"Enter "<<n<<"numbers"<<endl;
     for (int i = 0; i < n; i ++) {
        cin>>arr[i];
     }
     cout<<"For second largest number-"<<endl;
int largest = -1;
int secLargest = -1;
for (int j = 0; j < n; j++) {
    if (arr[j] > largest ) {
       secLargest = largest;
        largest = arr[j];
    } else {
        secLargest = arr[j];
    }
}
return 0 ;
}