#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main(){
    int n;
    cin >> n;
//    Output one line with one integer, the number we get by reversing the binary representation of n
    string s = bitset<32>(n).to_string();
    int i = 0;
    while(s[i] == '0'){
        i++;
    }
    string s2 = s.substr(i);
    string s3 = "";
    for(int i = s2.length()-1; i >= 0; i--){
        s3 += s2[i];
    }
    cout << stoi(s3, nullptr, 2) << endl;


}