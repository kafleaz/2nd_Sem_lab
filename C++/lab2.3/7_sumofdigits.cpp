#include<iostream>
using namespace std;
int sumOfDigits(int n)
{
    int r, sum=0;
    while (n != 0)
    {
        r = n%10;
        sum = sum + r;
        n = n/10;
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    cout<<"The sum of the digits is "<<sumOfDigits(n);
}