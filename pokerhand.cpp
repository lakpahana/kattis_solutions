#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
using namespace std;

int main()
{

    string line;
    getline(cin, line);

    istringstream iss(line);
    string word;
    // unorderd map where character is the key and value is count
    unordered_map<char, int> map;

    while (iss >> word)
    {
        // get first character of a string
        char first = word[0];
        // add character to map, if exist increment the value,else add to the map with 1
        if (map.find(first) == map.end())
        {
            map[first] = 1;
        }
        else
        {
            map[first]++;
        }
    }
    int max = 0;
    for (auto it = map.begin(); it != map.end(); it++)
    {
        if (it->second > max)
        {
            max = it->second;
        }
    }
    cout << max << endl;
    // cout << output << endl;
    return 0;
}