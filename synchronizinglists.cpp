#include <algorithm>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int n;

    while (cin >> n && n != 0)
    {
        vector<int> list1, list2;

        // Input values for list1
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            list1.push_back(temp);
        }

        // Input values for list2
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            list2.push_back(temp);
        }

        // Create a sorted version of list1
        vector<int> sorted_list1 = list1;
        sort(sorted_list1.begin(), sorted_list1.end());

        // Create a map to store the original positions of values in sorted_list1
        map<int, int> original_positions;

        for (int i = 0; i < n; i++)
        {
            original_positions[sorted_list1[i]] = i;
        }

        // Rearrange list2 according to the sorted order of list1
        vector<int> result;

        for (int i = 0; i < n; i++)
        {
            int pos = original_positions[list1[i]];
            result.push_back(list2[pos]);
        }

        // Output the rearranged list2
        for (auto value : result)
        {
            cout << value << endl;
        }

        cout << endl;
    }
}
