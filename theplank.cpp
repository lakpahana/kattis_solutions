// C++ program to illustrate the number of
// ways to represent N as sum of 1, 3 and 4.

#include <iostream>

using namespace std;

int sum2(int N) 
{ 
    int arr[N + 1]; 
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
  
    for(int i = 3; i <= N; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3]; 
    }  
    return arr[N]; 
} 

int main()
{
    //input integer
    int k;
    cin>>k;


	cout << sum2(k);
	return 0;
}
