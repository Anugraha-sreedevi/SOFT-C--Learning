#include<iostream>
using namespace std;
int main()
{
    int mark;

    cout<<"enter the mark: ";
    cin>>mark;

    if(mark>=90)
        cout<<"A grade";
    else if(mark>=80)
        cout<<"B grade";
    else if(mark>=70)
        cout<<"C grade";
    else if(mark>=60)
        cout<<"D grade";
    else
        cout<<"F grade";
        return 0;
}