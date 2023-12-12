#include<iostream>
using namespace std;



int len(char input[]){
    int count =0;
    for(int i=0;input[i]!='\0';i++){
        count++;
    }
    return count;
}

void reverse(char input[]){
    int s=0;
    int e=len(input)-1;

    while(s<e){
        swap(input[s],input[e]);
        s++;
        e--;
    } 
}



int main()
{
    char a[10];
    cin.getline(a,10);

    reverse(a);
    cout<<a<<endl;
}