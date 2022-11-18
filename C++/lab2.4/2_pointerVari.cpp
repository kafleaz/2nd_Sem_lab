#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int *p;
    p=&a;
    cout<<"Value of variable a= "<<a<<endl;
    cout<<"Address stored in pointer variable p= "<<p<<endl;
    cout<<"Value of *p variable= "<<*p<<endl;
    return 0;
}
