#include<iostream>
using namespace std;
int largest (int *p, int *ptr)
{
    if (*p > *ptr)
    {
        return *p;
    }
    else{
        return *ptr;
    }
}
int main()
{
    int a,b;
    cout<<"Enter any two number: ";
    cin>>a>>b;
    cout<<"Largest number is: "<<largest(&a,&b);
    return 0;
}