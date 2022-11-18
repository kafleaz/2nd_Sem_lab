#include<iostream>
using namespace std;
int display(int a, float b, char c[10])
{
    cout<<"integer= "<<a<<" float = "<<b<<" & character = "<<c;
}
int display(int a, int b)
{
    cout<<"integer= "<<a<<" float = "<<b;
}
int main()
{
    int a;
    float b;
    char c[10];
    cout<<"Enter the integer, float & character ";
    cin>>a>>b>>c;
    display(a,b,c);
    cout<<endl;
    display(a,b);
}