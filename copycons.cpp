#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length;
    int breadth;
    public:

    Rectangle(int l, int b)
    {
        setlength(l);
        setbreadth(b);
    }

    Rectangle(Rectangle &r)
    {
        length=r.length;
        breadth=r.breadth;
    }
    
    void setlength(int l)
    {
        if(l>=0)
        length=l;
        else
        length=0;
    }
    void setbreadth(int b)
    {
        if(b>=0)
        breadth=b;
        else
        breadth=0;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    } 
    int area()
    {
        return length*breadth;
    }
    
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    Rectangle r1(10, 5);
    Rectangle r2(r1);
    
    cout<<r2.area()<<endl;
    cout<<r2.perimeter()<<endl;
}