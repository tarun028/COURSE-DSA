#include<iostream>
using namespace std;

int len(char input[]){
    int count =0;
    for(int i=0;input[i]!='\0';i++){
        count++;
    }
    return count;
}
int main()
{
    char a[10];
    cin>>a;
    cout<<a[2]<<endl;
    cout<<len(a);
    return 0;
}