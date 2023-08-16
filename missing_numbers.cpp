#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    int numberOfInputs;
    cin >> numberOfInputs;
    int input;

    vector<int> inputs{};
    for (int i = 0; i < numberOfInputs; i++)
    {
        cin >> input;
        inputs.push_back(input);
    }
    
    int max = inputs[numberOfInputs-1];

    bool found = false;

    for (int i = 1; i <= max; i++)
    {
        if (find(inputs.begin(), inputs.end(), i) == inputs.end())
        {
            cout << i << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "good job" << endl;
    }
    
    return 0;
}
