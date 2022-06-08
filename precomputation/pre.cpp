#include <iostream>
typedef unsigned long long int ull;
using namespace std;
const int N=1e5+5;
const int M=1e9+7;
int ans[N];

void pre(){
    ans[1]=1;
    for(int i=2;i<N;i++)
    {
        ans[i]=(ans[i-1]*2)%M;
    }
}
int main() {
	// your code goes here
	int  t;
	cin>>t;
	pre();
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    cout<<ans[n]<<endl;
	}
	return 0;
}
