#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter two numbers= ";
    cin>>m>>n;
    while(m!=n)
    {
        if(m>n)
            m=m-n;
        else
            n=n-m;
    }
    cout<<"GCD IS= "<<m;
    return 0;
}