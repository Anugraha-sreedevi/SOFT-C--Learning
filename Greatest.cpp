#include <iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout<<"enter the num1: ";
    cin>>a; 

    cout<<"enter the num2: ";
    cin>>b;

    cout<<"enter the num3: ";
    cin>>c;

    if(a>b && a>c)
        cout<<"a is the greatest";
    else if(b>a && b>c)
        cout<<"b is the greatest";
    else
        cout<<"c is the greatest";

        return 0;
}