#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter Number of element"<<endl;
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum+a[i];
    }
    cout<<sum<<endl;
    

    return 0;
}