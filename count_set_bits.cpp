#include<iostream>
using namespace std;
int noofsetbits(int n)
{
    int x=0;
    while(n>0)
    {
        n=n&(n-1);
        x+=1;
    }
    return x;
}
int main()
{

    cout<<noofsetbits(6)<<endl;
}
//Brian kernighans algorithm
