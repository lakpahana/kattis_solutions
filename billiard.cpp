#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const double PI = 3.14159265358979323846;

pair<double, double> calculateLaunchParameters(int a, int b, int s, int m, int n) {
    double vx = a * m / (2.0 * s);
    double vy = b * n / (2.0 * s);

    double velocity = sqrt(vx * vx + vy * vy);
    double angle = atan(vy / vx) * 180.0 / PI;

    return make_pair(angle, velocity*2);
}

int main() {
    int a, b, s, m, n;

    //new int
    int *p = new int;







    while (true) {
        cin >> a >> b >> s >> m >> n;

        if (a == 0 && b == 0 && s == 0 && m == 0 && n == 0) {
            break;
        }

        pair<double, double> launchParams = calculateLaunchParameters(a, b, s, m, n);

        cout << fixed << setprecision(2);
        cout << launchParams.first << " " << launchParams.second << endl;
    }

    return 0;
}