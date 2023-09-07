#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> output;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        vector<int> v;
        for(int j = 0; j < k; j++){
            int l;
            cin >> l;
            v.push_back(l);
        }
        int sum = 0;
        for(int j = 0; j < v.size(); j++){
            sum += v[j];
        }
        output.push_back( sum - (k-1));
    }
    for(int i = 0; i < output.size(); i++){
        cout << output[i] << endl;
    }
}