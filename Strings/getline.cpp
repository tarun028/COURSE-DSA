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
    cin.getline(a,6,'x');
    cout<<a<<endl;
    cout<<len(a);
    return 0;
}