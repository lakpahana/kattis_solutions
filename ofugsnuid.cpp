#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        // insert k to the vector

        v.push_back(k);
    }
    // print the vector in reverse order
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << endl;
    }
}