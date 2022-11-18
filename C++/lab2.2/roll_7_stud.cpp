#include<iostream>
using namespace std;
int main()
{
    int r, m, i, s=0;
    float p;
    cout<<"Enter Roll no. of student\n";
    cin>>r;
    cout<<"Enter the marks obtain by the student\n";
    for ( i = 0; i < 7; i++)
    {
        cin>>m;
        s = s + m;
    }
    p = (float)s/i*100 / 100;
    cout<<"The percentage obtain by the student is "<<p;
}