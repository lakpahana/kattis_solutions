#include <iostream>

using namespace std;

double area(double a,double b){
    return (a*b)/2.0;
}

int main()
{
    
    double a,b;
    cin >> a  >> b;
    cout << area(a,b);        
    
    return 0;
}
