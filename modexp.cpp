#include<iostream>
using namespace std;
int power(int n,int m)
{
    int result=1;
    while(m>0)
    {
        if(m%2==1)result*=n;
        n=(n*n);
        m/=2;
    }
    return result;

}//o(log(n)) time complexity;
int main()
{
    
    cout<<power(3,2)<<endl;
    return 0;
}