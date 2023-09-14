#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int num_friends;
    cin >> num_friends;
    map<string, pair<int, string>> friend_data;

    for (int i = 0; i < num_friends; i++)
    {
        string friend_name, friend_birthday;
        int friend_likes;
        cin >> friend_name >> friend_likes >> friend_birthday;
        if (friend_data.find(friend_birthday) == friend_data.end() || friend_likes > friend_data[friend_birthday].first)
        {
            friend_data[friend_birthday] = {friend_likes, friend_name};
        }
    }
    cout << friend_data.size() << endl;
    vector<string> friend_names;

    for (auto friend_pair : friend_data)
    {
        friend_names.push_back(friend_pair.second.second);
    }
    sort(friend_names.begin(), friend_names.end());

    for (string name : friend_names)
    {
        cout << name << endl;
    }
    return 0;
}
