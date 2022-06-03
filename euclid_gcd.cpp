#include<iostream>
using namespace std;
// int gcd(int m,int n)
// {
//     if(m==0){
//         return n;
//     }
//     return gcd(n%m,m);
    
// }
int gcd(int a,int b)
{
    int rem=a%b;
    while(rem!=0)
    {
        b=a;
        a=rem;
        rem=a%b;
    }
    return a;
}
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<gcd(m,n)<<endl;
    return 0;
}