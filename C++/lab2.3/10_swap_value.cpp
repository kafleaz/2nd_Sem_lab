#include<iostream>
using namespace std;
int swap(int a, int b);
int swap(int a, int b)
{
    int temp;
    temp = b;
    b = a;
    a = temp;
    return (a,b);
}
int main()
{
    int x,y;
    cout<<"Enter the value of a and b to swap ";
    cin >>x>>y;
    swap(x,y);
    cout<<"value after the swap is "<<x <<" & "<<y;
}