#include<iostream>
using namespace std;
namespace A
{
    int add(int x=1, int y=4)
    {
        return(x+y);
    }
}
namespace B
{
    int add(int a=5, int b=7)
    {
        return (a+b);
    }
}
int main()
{
    cout<<"Sum of A: "<<A:: add()<<endl;
    cout<<"Sum of B: "<<B:: add();
    return 0;
}