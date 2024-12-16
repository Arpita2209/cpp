#include<iostream>
using namespace std;
int main()
{
    int marks;

    cout<<"enter the marks= ";
    cin>>marks;

    if(marks>=35&&60>=marks)
        cout<<"average";
    else   
        cout<<"fail";
}