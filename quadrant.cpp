#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    cin>> x;
    cin>> y;
    
    //if x>0 and y>0 = 1
    //if x<0 and y>0 = 2

    if (x>=0 && y>=0 )
    {
        cout<<1;
    }else if (x<=0 && y>0)
    {
        cout<<2;
    }else if (x<0 && y<0)
    {
        cout<<3;
    }else if (x>0&& y<0)
    {
        cout<<4;
    }
    
    
    
    
    
    
    
    return 0;
}
