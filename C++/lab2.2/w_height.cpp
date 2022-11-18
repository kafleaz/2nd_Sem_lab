#include<iostream>
using namespace std;
int main()
{
    int n, h, w, a=0;
    cout<<"Enter the number of boys:";
    cin>>n;
    cout<<"Enter the height and weight of boys:"<<endl;
    for (int i = 1; i <= n; i++)
    {
        cout<<endl<<"Height:";
        cin>> h;
        cout<<"Weight:";
        cin>>w;

        if (w<50 && h>170)
         {
          a++;
         }
    }
    cout<<"Number of boys having height greater than 170cm & weight less than 50 kg are "<<a;
    return 0;
}