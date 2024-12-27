#include<iostream>
using namespace std;
int main()
{
    int A[7]={4,5,6,7,8,9,10};
    int l=0,h=6,mid,key;

    cout<<"enter key element= ";
    cin>>key;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
        {
            cout<<"found at"<<mid;
            return 0;
        }
        else if(key<A[mid])
            h=mid-1;
        else   
            l=mid+1;    
        }
        cout<<"not found";
}