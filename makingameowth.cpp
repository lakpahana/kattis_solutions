        #include <iostream>
        using namespace std;
        int main(){
            //The only line of input contains 4 space-separated positive integers,
            //n , p ,x,y
            int n, p, x, y;
            cin >> n >> p >> x >> y;
            cout << (y*(p/(n-1))+p*x) << endl;
        }