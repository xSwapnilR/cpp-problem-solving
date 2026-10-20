#include <iostream>
using namespace std;

int main() {
    int num, r;
    int primesum = 0;
    
    cout << "Enter the value of num: " << endl;
    cin >> num;
    
    while (num != 0) {
        r = num % 10; 
        
        // Hint 1: Single digit ke liye direct check lagao ki woh prime hai ya nahi (2, 3, 5, 7)
        if (r == 2 || r == 3 || r == 5 || r == 7) {
            primesum += r;
        }
        
        num = num / 10;
    }
    
    // Ab primesum mil gaya hai. Check karna hai ki primesum khud prime hai ya nahi.
    // Yaad rakhna: agar primesum <= 1 hai, toh woh prime nahi hai.
    bool isPrime = true;
    
    if (primesum <= 1) {
        isPrime = false;
    } else {
        // Hint 2: 2 se lekar (primesum - 1) tak loop chalao aur check karo ki koi factor hai kya.
        for (int j = 2; j < primesum; j++) {
            if (primesum % j == 0) {
                isPrime = false;
                break; // Factor mil gaya, aage check karne ki zaroorat nahi
            }
        }
    }
    
    // Hint 3: isPrime ke base par YES ya NO print karo
    if (isPrime) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}