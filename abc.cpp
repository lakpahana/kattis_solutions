#include <iostream>

#include <unordered_map>
#include <algorithm>
using namespace std;



int main()
{
    
    
    int x,y,z;
    cin >> x  >> y >> z;
    
    int arr[3] = {x,y,z};
    sort(arr,arr+3);
    
     std::unordered_map<char, int> map;
 

    map['A'] = arr[0];
    map['B'] = arr[1];
    map['C'] = arr[2];

    // cout << map['A'] << endl;    
    //arr [A,B,C]
    char f,s,t;
    cin >> f>>s>>t;
    
    std::cout << map[f] << " "<< map[s] << " "<< map[t] << std::endl;
    
 
    
    //a is less than b
    // a < b && b < c
    //b is less than c
    return 0;
}