#include<iostream>
using namespace std;
int main()
{
    int arr[3][4]={{30,4,60},{20,10,9}};
    int i, sum=0;
    int *ptr;
    ptr= &arr[0][0];
    for (i=0; i<2;i++)
    {
        sum+=*ptr;
        ptr ++;
    }
    cout<<"sum of array is: "<<sum<<endl;
    cout<<"Average is: "<<sum/12<<endl;
    return 0;
}