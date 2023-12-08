#include<iostream>
using namespace std;
int main()
{
    int a ;
    int b;
    cin>>a;
    cin>>b;

    cout<<a<<" "<<b<<endl;
    int temp;
    temp = a;
    a=b;
    b=temp;

    cout<<a<<" "<<b<<endl;
    return 0;
}