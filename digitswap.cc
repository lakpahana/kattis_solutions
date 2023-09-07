#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    //n contains two digits
    //swap it
    int a = n/10;
    int b = n%10;
    int c = b*10 + a;
    cout << c << endl;
}