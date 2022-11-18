#include<iostream>
using namespace std;
const int MAX=3;
int main()
{
    int a[MAX]={10,20,30},sum=0,avg;
    int *p;
    p=a;
    for (int i=0; i<MAX; i++)
    {
        sum=sum+ *p;
        p++;
    }
    cout<<"sum: "<<sum<<endl;
    avg=sum/3;
    cout<<"Average is" <<avg;
    return 0;
}