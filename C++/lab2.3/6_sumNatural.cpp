#include<iostream>
using namespace std;
int sumNatural(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int a;
    cout<<"Enter the value of n ";
    cin>>a;
    cout<<sumNatural(a);
}