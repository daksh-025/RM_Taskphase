#include <iostream>
using namespace std;

int main() {
    int a, b, gcd;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if ( b> a) {   
        int t = b;
        b= a;
        a = t;
    }
    
    for (int i = 1; i <=  b; ++i) {
        if (a % i == 0 && b % i ==0) {
            gcd = i;
        }
    }

    cout << "GCD is: " <<" "<< gcd;
    return 0;
} 