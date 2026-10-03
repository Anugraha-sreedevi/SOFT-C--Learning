#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        for(int j=10;j>=1;j--)
        {
            cout<<i<<"i*j="<<i*j<<"\t";
        }
        cout<<endl; 
    }
    return 0;
}