#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cout<<"Enter a number:";
    cin>>n;
    while (n!=0)
    {
        n=n/10;
        c++;
    }
    cout<<"The number of digits is "<<c;
    return 0;
    

}