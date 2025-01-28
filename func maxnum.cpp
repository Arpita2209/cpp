#include<iostream>
using namespace std;
int max(int a,int b,int c)
{
    if(a>b && a>c)
    return c;
    else if(b>c)
    return b;
    else
    return c;


}
int main()
{
    int a=10,b=16,c=18,m;
    m=max(a,b,c);
    cout<<m<<endl;

}