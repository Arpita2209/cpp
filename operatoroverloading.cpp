#include<iostream>
using namespace std;
class Complex
{
    public:
    int real;
    int img;
    
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }



};
int main()
{
    Complex c1,c2,c3;
    c1.real=3;c1.img=7;
    c2.real=2;c2.img=4;
    c3=c1+c2;
    cout<<c3.real<<"+i"<<c3.img<<endl;
}