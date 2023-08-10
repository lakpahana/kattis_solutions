#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    // string array of smiles
    string smiles[5] = {":)", ";)", ":-)", ";-)"};

    // input string
    string input;
    cin >> input;
    vector<int> positions;
    //:)xsy:->>;-)::)3
    // loop through the array
    for (int i = 0; i < 4; i++)
    {
        // find the position of the smile
        int pos = input.find(smiles[i]);
        // cout the posof the smile
        while (pos != string::npos)
        {
            positions.push_back(pos);
            pos = input.find(smiles[i], pos + 1);
        }
    }

    // sort the positions
    sort(positions.begin(), positions.end());

    // loop through the positions
    for (int i = 0; i < positions.size(); i++)
    {
        // print the position
        cout << positions[i] << " "<< endl;
    }
    return 0;
}
