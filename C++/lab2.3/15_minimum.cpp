#include<iostream>
using namespace std;
int min(int a, int b, int c)
{
    if (a<b)
    {
        if (a<c)
        {
            cout<<a<<" is the minimum number";
        }
        else
        {
            cout<<c<<" is the minimum number";
        }
    }
    else
    {
        if (b<c)
        {
            cout<<b<<" is the minimum number";
        }
        else
        {
            cout<<c<<" is the minimum number";
        }
    }
}
int min(int a, int b)
{
    if (a<b)
        {
            cout<<a<<" is the minimum number";
        }
        else
        {
            cout<<b<<" is the minimum number";
        }
}

int main()
{
    int x= 20, y=15,z=8;
    min(x,y);
    cout<<endl;
    min(x,z);
    return 0;
}