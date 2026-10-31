#include <iostream>
#include <climits>
using namespace std;
int main () {
    int n,target;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<"elements "<<endl;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
cout<<"Enter target element : ";
cin>>target;
int count = 0;
for (int i = 0; i < n ; i++) {
    if(arr[i] == target) {
    count++;
}
}
int maxValue = INT_MIN;
for (int i = 0; i<n; i++) {
    if (arr[i]> maxValue) {

        maxValue = arr[i];
    }
}

cout<<"Frequency of Target: "<<count<<endl;
cout<<"Maximum Value = "<<maxValue<<endl;


    return 0;
}