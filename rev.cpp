#include<iostream>
using namespace std;
int main()
{
    int n,r,rev=0;
    cout<<"enter the number=";
    cin>>n;

    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    cout<<rev;
}