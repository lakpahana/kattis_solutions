// Given two integers 
//  and 
// , compute their greatest common divisor.

// Input
// The first and only line contains the integers 
//  and 
//  (
// ).

// Output
// Output a single integer – the greatest common divisor of 
//  and 
// .

#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    return gcd(b, a%b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
}