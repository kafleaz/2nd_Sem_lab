#include<iostream>
using namespace std;
int main()
{
    int n, rem,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem;
        
    }
    cout<<"The sum of digits is "<<sum;
    return 0;

}