#include<iostream>
using namespace std;
int main()
{
    int n, i, count=0;
    cout<<"Enter no. of employees: ";
    cin>>n;
    int * age= new int[n];
    cout<<"Enter their age: "<<endl;
    for(i=0; i<n; i++)
    {
        cin>>*age;
        if(*age >= 60)
        {
            count ++;
            age ++;
        }
    }
    cout<<"Employee above 60 years: "<<count<<endl;
    return 0;
}