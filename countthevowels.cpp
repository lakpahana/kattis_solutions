#include <iostream>
#include <string>
using namespace std;
int main()
{
string s;
getline(cin, s);
int size = s.size();
int count = 0;
for (int i = 0; i < size; i++) {
char ch = tolower(s[i]);
if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
count++;
}
cout << count << endl;
return 0;
}