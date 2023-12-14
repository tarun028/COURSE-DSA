#include<iostream>
using namespace std;

void printArray(int a[][5],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int a[][5]={{1,2},{3,4},{5,6}};
    printArray(a,2,5);

    return 0;
}