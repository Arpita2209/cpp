#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    cout<<"enter n= ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%10==0)
        {
            count++;
        }
    }
    if(count==2)
        cout<<"it's a prime";
    else
        cout<<"it's not prime";
}