#include<iostream>
using namespace std;
int main()
{
    /*
    int a[10];
    a[0]=2;
    a[4]=5;

    cout<<a[0]<<" "<<a[4]<<endl;
    */

    /*
    int a[4]={1,2,3,4};  //initialisation
    cout<<a[0]<<a[1]<<a[3]<<endl; //printing

    for(int i=0;i<4;i++){
        cout<<a[i]<<endl;
    }
    */

    int a[10];
    for(int i=0;i<10;i++){
        a[i]=i*i;
        cout<<a[i]<<""<<endl;
    }
    return 0;

}